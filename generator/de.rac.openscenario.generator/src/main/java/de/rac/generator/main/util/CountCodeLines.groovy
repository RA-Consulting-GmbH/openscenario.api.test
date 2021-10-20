package de.rac.generator.main.util

import java.nio.file.FileVisitResult;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.SimpleFileVisitor;

import java.nio.file.StandardCopyOption
import java.nio.file.attribute.BasicFileAttributes




class CountCodeLines {
	
	static int linesOfCode = 0;
	static int linesOfGeneratedCode = 0;
	static void main(String[] args)
	{
		if (args.length != 2) {
			println("Usage: CountCodeLines rootCodePath rootGeneratedCodePath");
			System.exit(1);
		}

		List<File> codePaths = [new File(args[0]),new File(args[1])];
		
		codePaths.each { directory ->
			try {
				
					println(countLinesFromFileTree(directory));
				
			} catch (IOException e) {
				println("Cannot find directory ${directory}");
				e.printStackTrace();
				System.exit(1);
			}
		}
		
	}

	public  static int countLinesFromFileTree(File src) throws IOException {

		int lines = 0;
		if (src.exists()) {
			Files.walkFileTree(src.toPath(), new SimpleFileVisitor<Path>() {
						@Override
						public FileVisitResult visitFile(Path file,
								BasicFileAttributes attrs) throws IOException {
								
							BufferedReader reader = new BufferedReader(new FileReader(file.toString()));
							
							while (reader.readLine() != null) lines++;
							reader.close();
							return FileVisitResult.CONTINUE;
						}

					});
		}
		return lines;
	}

	
}
