<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform" xmlns:fo="http://www.w3.org/1999/XSL/Format">
	<xsl:template match="/">
		<html>
			<head>
				<title>lab2</title>
			</head>
			<body>
				<table border="5">
					<tr>
						<th>Title</th>
						<th>Artist</th>
						<th>PRICE</th>
					</tr>
					<xsl:for-each select="CATALOG/CD">
						<xsl:sort select="PRICE" data-type="number" order="descending"/>
						<tr>
							<td>
								<xsl:value-of select="TITLE"/>
							</td>
							<td>
								<xsl:value-of select="ARTIST"/>
							</td>
							<td>
								<xsl:value-of select="PRICE"/>
							</td>
						</tr>
					</xsl:for-each>
				</table>
			</body>
		</html>
	</xsl:template>
</xsl:stylesheet>
