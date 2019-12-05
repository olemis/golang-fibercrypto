// Code generated by mockery v1.0.0. DO NOT EDIT.

package mocks

import core "github.com/fibercrypto/fibercryptowallet/src/core"
import mock "github.com/stretchr/testify/mock"

// WalletSet is an autogenerated mock type for the WalletSet type
type WalletSet struct {
	mock.Mock
}

// CreateWallet provides a mock function with given fields: name, seed, isEncryptrd, pwd, scanAddressesN
func (_m *WalletSet) CreateWallet(name string, seed string, isEncryptrd bool, pwd core.PasswordReader, scanAddressesN int) (core.Wallet, error) {
	ret := _m.Called(name, seed, isEncryptrd, pwd, scanAddressesN)

	var r0 core.Wallet
	if rf, ok := ret.Get(0).(func(string, string, bool, core.PasswordReader, int) core.Wallet); ok {
		r0 = rf(name, seed, isEncryptrd, pwd, scanAddressesN)
	} else {
		if ret.Get(0) != nil {
			r0 = ret.Get(0).(core.Wallet)
		}
	}

	var r1 error
	if rf, ok := ret.Get(1).(func(string, string, bool, core.PasswordReader, int) error); ok {
		r1 = rf(name, seed, isEncryptrd, pwd, scanAddressesN)
	} else {
		r1 = ret.Error(1)
	}

	return r0, r1
}

// GetWallet provides a mock function with given fields: id
func (_m *WalletSet) GetWallet(id string) core.Wallet {
	ret := _m.Called(id)

	var r0 core.Wallet
	if rf, ok := ret.Get(0).(func(string) core.Wallet); ok {
		r0 = rf(id)
	} else {
		if ret.Get(0) != nil {
			r0 = ret.Get(0).(core.Wallet)
		}
	}

	return r0
}

// ListWallets provides a mock function with given fields:
func (_m *WalletSet) ListWallets() core.WalletIterator {
	ret := _m.Called()

	var r0 core.WalletIterator
	if rf, ok := ret.Get(0).(func() core.WalletIterator); ok {
		r0 = rf()
	} else {
		if ret.Get(0) != nil {
			r0 = ret.Get(0).(core.WalletIterator)
		}
	}

	return r0
}
