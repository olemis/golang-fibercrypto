// Code generated by mockery v1.0.0. DO NOT EDIT.

package mocks

import core "github.com/fibercrypto/fibercryptowallet/src/core"
import mock "github.com/stretchr/testify/mock"

// WalletStorage is an autogenerated mock type for the WalletStorage type
type WalletStorage struct {
	mock.Mock
}

// Decrypt provides a mock function with given fields: walletName, password
func (_m *WalletStorage) Decrypt(walletName string, password core.PasswordReader) {
	_m.Called(walletName, password)
}

// Encrypt provides a mock function with given fields: walletName, password
func (_m *WalletStorage) Encrypt(walletName string, password core.PasswordReader) {
	_m.Called(walletName, password)
}

// IsEncrypted provides a mock function with given fields: walletName
func (_m *WalletStorage) IsEncrypted(walletName string) (bool, error) {
	ret := _m.Called(walletName)

	var r0 bool
	if rf, ok := ret.Get(0).(func(string) bool); ok {
		r0 = rf(walletName)
	} else {
		r0 = ret.Get(0).(bool)
	}

	var r1 error
	if rf, ok := ret.Get(1).(func(string) error); ok {
		r1 = rf(walletName)
	} else {
		r1 = ret.Error(1)
	}

	return r0, r1
}
