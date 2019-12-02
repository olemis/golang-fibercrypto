// Code generated by mockery v1.0.0. DO NOT EDIT.

package mocks

import core "github.com/fibercrypto/FiberCryptoWallet/src/core"
import mock "github.com/stretchr/testify/mock"

// TxnSigner is an autogenerated mock type for the TxnSigner type
type TxnSigner struct {
	mock.Mock
}

// GetSignerDescription provides a mock function with given fields:
func (_m *TxnSigner) GetSignerDescription() (string, error) {
	ret := _m.Called()

	var r0 string
	if rf, ok := ret.Get(0).(func() string); ok {
		r0 = rf()
	} else {
		r0 = ret.Get(0).(string)
	}

	var r1 error
	if rf, ok := ret.Get(1).(func() error); ok {
		r1 = rf()
	} else {
		r1 = ret.Error(1)
	}

	return r0, r1
}

// GetSignerUID provides a mock function with given fields:
func (_m *TxnSigner) GetSignerUID() (core.UID, error) {
	ret := _m.Called()

	var r0 core.UID
	if rf, ok := ret.Get(0).(func() core.UID); ok {
		r0 = rf()
	} else {
		r0 = ret.Get(0).(core.UID)
	}

	var r1 error
	if rf, ok := ret.Get(1).(func() error); ok {
		r1 = rf()
	} else {
		r1 = ret.Error(1)
	}

	return r0, r1
}

// ReadyForTxn provides a mock function with given fields: _a0, _a1
func (_m *TxnSigner) ReadyForTxn(_a0 core.Wallet, _a1 core.Transaction) (bool, error) {
	ret := _m.Called(_a0, _a1)

	var r0 bool
	if rf, ok := ret.Get(0).(func(core.Wallet, core.Transaction) bool); ok {
		r0 = rf(_a0, _a1)
	} else {
		r0 = ret.Get(0).(bool)
	}

	var r1 error
	if rf, ok := ret.Get(1).(func(core.Wallet, core.Transaction) error); ok {
		r1 = rf(_a0, _a1)
	} else {
		r1 = ret.Error(1)
	}

	return r0, r1
}

// SignTransaction provides a mock function with given fields: _a0, _a1, _a2
func (_m *TxnSigner) SignTransaction(_a0 core.Transaction, _a1 core.PasswordReader, _a2 []string) (core.Transaction, error) {
	ret := _m.Called(_a0, _a1, _a2)

	var r0 core.Transaction
	if rf, ok := ret.Get(0).(func(core.Transaction, core.PasswordReader, []string) core.Transaction); ok {
		r0 = rf(_a0, _a1, _a2)
	} else {
		if ret.Get(0) != nil {
			r0 = ret.Get(0).(core.Transaction)
		}
	}

	var r1 error
	if rf, ok := ret.Get(1).(func(core.Transaction, core.PasswordReader, []string) error); ok {
		r1 = rf(_a0, _a1, _a2)
	} else {
		r1 = ret.Error(1)
	}

	return r0, r1
}
