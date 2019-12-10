// Code generated by mockery v1.0.0. DO NOT EDIT.

package mocks

import core "github.com/fibercrypto/fibercryptowallet/src/core"
import mock "github.com/stretchr/testify/mock"

// AltcoinPlugin is an autogenerated mock type for the AltcoinPlugin type
type AltcoinPlugin struct {
	mock.Mock
}

// GetDescription provides a mock function with given fields:
func (_m *AltcoinPlugin) GetDescription() string {
	ret := _m.Called()

	var r0 string
	if rf, ok := ret.Get(0).(func() string); ok {
		r0 = rf()
	} else {
		r0 = ret.Get(0).(string)
	}

	return r0
}

// GetName provides a mock function with given fields:
func (_m *AltcoinPlugin) GetName() string {
	ret := _m.Called()

	var r0 string
	if rf, ok := ret.Get(0).(func() string); ok {
		r0 = rf()
	} else {
		r0 = ret.Get(0).(string)
	}

	return r0
}

// ListSupportedAltcoins provides a mock function with given fields:
func (_m *AltcoinPlugin) ListSupportedAltcoins() []core.AltcoinMetadata {
	ret := _m.Called()

	var r0 []core.AltcoinMetadata
	if rf, ok := ret.Get(0).(func() []core.AltcoinMetadata); ok {
		r0 = rf()
	} else {
		if ret.Get(0) != nil {
			r0 = ret.Get(0).([]core.AltcoinMetadata)
		}
	}

	return r0
}

// ListSupportedFamilies provides a mock function with given fields:
func (_m *AltcoinPlugin) ListSupportedFamilies() []string {
	ret := _m.Called()

	var r0 []string
	if rf, ok := ret.Get(0).(func() []string); ok {
		r0 = rf()
	} else {
		if ret.Get(0) != nil {
			r0 = ret.Get(0).([]string)
		}
	}

	return r0
}

// LoadPEX provides a mock function with given fields: netType
func (_m *AltcoinPlugin) LoadPEX(netType string) (core.PEX, error) {
	ret := _m.Called(netType)

	var r0 core.PEX
	if rf, ok := ret.Get(0).(func(string) core.PEX); ok {
		r0 = rf(netType)
	} else {
		if ret.Get(0) != nil {
			r0 = ret.Get(0).(core.PEX)
		}
	}

	var r1 error
	if rf, ok := ret.Get(1).(func(string) error); ok {
		r1 = rf(netType)
	} else {
		r1 = ret.Error(1)
	}

	return r0, r1
}

// LoadSignService provides a mock function with given fields:
func (_m *AltcoinPlugin) LoadSignService() (core.BlockchainSignService, error) {
	ret := _m.Called()

	var r0 core.BlockchainSignService
	if rf, ok := ret.Get(0).(func() core.BlockchainSignService); ok {
		r0 = rf()
	} else {
		if ret.Get(0) != nil {
			r0 = ret.Get(0).(core.BlockchainSignService)
		}
	}

	var r1 error
	if rf, ok := ret.Get(1).(func() error); ok {
		r1 = rf()
	} else {
		r1 = ret.Error(1)
	}

	return r0, r1
}

// LoadTransactionAPI provides a mock function with given fields: netType
func (_m *AltcoinPlugin) LoadTransactionAPI(netType string) (core.BlockchainTransactionAPI, error) {
	ret := _m.Called(netType)

	var r0 core.BlockchainTransactionAPI
	if rf, ok := ret.Get(0).(func(string) core.BlockchainTransactionAPI); ok {
		r0 = rf(netType)
	} else {
		if ret.Get(0) != nil {
			r0 = ret.Get(0).(core.BlockchainTransactionAPI)
		}
	}

	var r1 error
	if rf, ok := ret.Get(1).(func(string) error); ok {
		r1 = rf(netType)
	} else {
		r1 = ret.Error(1)
	}

	return r0, r1
}

// LoadWalletEnvs provides a mock function with given fields:
func (_m *AltcoinPlugin) LoadWalletEnvs() []core.WalletEnv {
	ret := _m.Called()

	var r0 []core.WalletEnv
	if rf, ok := ret.Get(0).(func() []core.WalletEnv); ok {
		r0 = rf()
	} else {
		if ret.Get(0) != nil {
			r0 = ret.Get(0).([]core.WalletEnv)
		}
	}

	return r0
}

// RegisterTo provides a mock function with given fields: manager
func (_m *AltcoinPlugin) RegisterTo(manager core.AltcoinManager) {
	_m.Called(manager)
}
