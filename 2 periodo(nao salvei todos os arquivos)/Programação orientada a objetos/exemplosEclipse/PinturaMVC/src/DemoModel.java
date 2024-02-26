import java.awt.*;

/**
 * The DemoModel class holds the information that is used by the GUI.
 * Ask yourself the question, what data would be needed to recreate
 * the state of the GUI?  This data is what should be stored in the
 * model.
 * <p>
 * The instance variables are from Fig. 14.34.
 * @author Tom Bylander
 */
public class DemoModel {
    /** 
     * The number of points 
     */
	private int pointCount;

	/** 
	 * An array of 10000 java.awt.Point references 
	 */
	private Point[] points;
	
	/** 
	 * The color selected by the user 
	 */
	private Color selectedColor;
	
	public DemoModel() {
		pointCount = 0;
		points = new Point[10000];
		selectedColor = Color.CYAN;
	}
	
	/**
	 * Add a Point to the points array.
	 * @param point the Point to be added to points.
	 */
	public void addPoint(Point point) {
		// doesn't avoid out-of-bounds errors
		points[pointCount] = point;
		pointCount++;
	}
	
	/**
	 * Returns point at index i.
	 * Returns null if no such point exists.
	 * @param i
	 */
	public Point getPoint(int i) {
		if (i >= 0 && i < pointCount) {
			// probably should return a new point so that the return
			// value cannot be used to change the array element
			return points[i];
		}
		return null;
	}
	
	/**
	 * Store the color that the user selected.
	 * @param color the color selected by the user
	 */
	public void setSelectedColor(Color color) {
		selectedColor = color;
	}
	
	/**
	 * @return the color selected by the user
	 */
	public Color getSelectedColor() {
		return selectedColor;
	}
}
