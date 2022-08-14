

clean_m0:
	cd module00/ex00 && $(MAKE) fclean
	cd module00/ex00 && $(MAKE) fclean
	cd module00/ex00 && $(MAKE) fclean

clean_m4:
	cd module04/ex00 && $(MAKE) fclean
	cd module04/ex01 && $(MAKE) fclean
	cd module04/ex02 && $(MAKE) fclean

clean_m5:
	cd module05/ex00 && $(MAKE) fclean
	cd module05/ex01 && $(MAKE) fclean
	cd module05/ex02 && $(MAKE) fclean
	cd module05/ex03 && $(MAKE) fclean

clean_m6:
	cd module06/ex00 && $(MAKE) fclean
	cd module06/ex01 && $(MAKE) fclean
	cd module06/ex02 && $(MAKE) fclean

clean_m7:
	cd module07/ex00 && $(MAKE) fclean
	cd module07/ex01 && $(MAKE) fclean
	cd module07/ex02 && $(MAKE) fclean

clean_m8:
	cd module08/ex00 && $(MAKE) fclean
	cd module08/ex01 && $(MAKE) fclean
	cd module08/ex02 && $(MAKE) fclean

clean:
	$(MAKE) clean_m0
	$(MAKE) clean_m4
	$(MAKE) clean_m5
	$(MAKE) clean_m6
	$(MAKE) clean_m7
	$(MAKE) clean_m8