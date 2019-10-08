/**
 * 
 */
package com.banyuan.pss.dao;

import java.util.Vector;

import com.banyuan.pss.entity.Sell;

/**
 * @author yw
 * 2019年9月23日  上午9:30:45
 *
 */
public interface SellDao {
	public Vector getData() ;
	public Vector getDataById(Sell sell);
	public Vector updateData(Sell sell);
	public void insertData(Sell sell);
	public Vector deleteData(Sell sell) ;
	//public Vector getDataByCid(Sell sell);

}
