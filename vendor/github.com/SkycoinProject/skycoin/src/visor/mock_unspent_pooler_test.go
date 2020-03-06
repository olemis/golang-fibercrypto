// Code generated by mockery v1.0.0. DO NOT EDIT.

package visor

import (
	cipher "github.com/SkycoinProject/skycoin/src/cipher"
	coin "github.com/SkycoinProject/skycoin/src/coin"

	mock "github.com/stretchr/testify/mock"

	"github.com/SkycoinProject/skycoin/src/visor/blockdb"
	dbutil "github.com/SkycoinProject/skycoin/src/visor/dbutil"
)

// MockUnspentPooler is an autogenerated mock type for the UnspentPooler type
type MockUnspentPooler struct {
	mock.Mock
}

// AddressCount provides a mock function with given fields: _a0
func (_m *MockUnspentPooler) AddressCount(_a0 *dbutil.Tx) (uint64, error) {
	ret := _m.Called(_a0)

	var r0 uint64
	if rf, ok := ret.Get(0).(func(*dbutil.Tx) uint64); ok {
		r0 = rf(_a0)
	} else {
		r0 = ret.Get(0).(uint64)
	}

	var r1 error
	if rf, ok := ret.Get(1).(func(*dbutil.Tx) error); ok {
		r1 = rf(_a0)
	} else {
		r1 = ret.Error(1)
	}

	return r0, r1
}

// Contains provides a mock function with given fields: _a0, _a1
func (_m *MockUnspentPooler) Contains(_a0 *dbutil.Tx, _a1 cipher.SHA256) (bool, error) {
	ret := _m.Called(_a0, _a1)

	var r0 bool
	if rf, ok := ret.Get(0).(func(*dbutil.Tx, cipher.SHA256) bool); ok {
		r0 = rf(_a0, _a1)
	} else {
		r0 = ret.Get(0).(bool)
	}

	var r1 error
	if rf, ok := ret.Get(1).(func(*dbutil.Tx, cipher.SHA256) error); ok {
		r1 = rf(_a0, _a1)
	} else {
		r1 = ret.Error(1)
	}

	return r0, r1
}

// Get provides a mock function with given fields: _a0, _a1
func (_m *MockUnspentPooler) Get(_a0 *dbutil.Tx, _a1 cipher.SHA256) (*coin.UxOut, error) {
	ret := _m.Called(_a0, _a1)

	var r0 *coin.UxOut
	if rf, ok := ret.Get(0).(func(*dbutil.Tx, cipher.SHA256) *coin.UxOut); ok {
		r0 = rf(_a0, _a1)
	} else {
		if ret.Get(0) != nil {
			r0 = ret.Get(0).(*coin.UxOut)
		}
	}

	var r1 error
	if rf, ok := ret.Get(1).(func(*dbutil.Tx, cipher.SHA256) error); ok {
		r1 = rf(_a0, _a1)
	} else {
		r1 = ret.Error(1)
	}

	return r0, r1
}

// GetAll provides a mock function with given fields: _a0
func (_m *MockUnspentPooler) GetAll(_a0 *dbutil.Tx) (coin.UxArray, error) {
	ret := _m.Called(_a0)

	var r0 coin.UxArray
	if rf, ok := ret.Get(0).(func(*dbutil.Tx) coin.UxArray); ok {
		r0 = rf(_a0)
	} else {
		if ret.Get(0) != nil {
			r0 = ret.Get(0).(coin.UxArray)
		}
	}

	var r1 error
	if rf, ok := ret.Get(1).(func(*dbutil.Tx) error); ok {
		r1 = rf(_a0)
	} else {
		r1 = ret.Error(1)
	}

	return r0, r1
}

// GetArray provides a mock function with given fields: _a0, _a1
func (_m *MockUnspentPooler) GetArray(_a0 *dbutil.Tx, _a1 []cipher.SHA256) (coin.UxArray, error) {
	ret := _m.Called(_a0, _a1)

	var r0 coin.UxArray
	if rf, ok := ret.Get(0).(func(*dbutil.Tx, []cipher.SHA256) coin.UxArray); ok {
		r0 = rf(_a0, _a1)
	} else {
		if ret.Get(0) != nil {
			r0 = ret.Get(0).(coin.UxArray)
		}
	}

	var r1 error
	if rf, ok := ret.Get(1).(func(*dbutil.Tx, []cipher.SHA256) error); ok {
		r1 = rf(_a0, _a1)
	} else {
		r1 = ret.Error(1)
	}

	return r0, r1
}

// GetUnspentHashesOfAddrs provides a mock function with given fields: _a0, _a1
func (_m *MockUnspentPooler) GetUnspentHashesOfAddrs(_a0 *dbutil.Tx, _a1 []cipher.Address) (blockdb.AddressHashes, error) {
	ret := _m.Called(_a0, _a1)

	var r0 blockdb.AddressHashes
	if rf, ok := ret.Get(0).(func(*dbutil.Tx, []cipher.Address) blockdb.AddressHashes); ok {
		r0 = rf(_a0, _a1)
	} else {
		if ret.Get(0) != nil {
			r0 = ret.Get(0).(blockdb.AddressHashes)
		}
	}

	var r1 error
	if rf, ok := ret.Get(1).(func(*dbutil.Tx, []cipher.Address) error); ok {
		r1 = rf(_a0, _a1)
	} else {
		r1 = ret.Error(1)
	}

	return r0, r1
}

// GetUnspentsOfAddrs provides a mock function with given fields: _a0, _a1
func (_m *MockUnspentPooler) GetUnspentsOfAddrs(_a0 *dbutil.Tx, _a1 []cipher.Address) (coin.AddressUxOuts, error) {
	ret := _m.Called(_a0, _a1)

	var r0 coin.AddressUxOuts
	if rf, ok := ret.Get(0).(func(*dbutil.Tx, []cipher.Address) coin.AddressUxOuts); ok {
		r0 = rf(_a0, _a1)
	} else {
		if ret.Get(0) != nil {
			r0 = ret.Get(0).(coin.AddressUxOuts)
		}
	}

	var r1 error
	if rf, ok := ret.Get(1).(func(*dbutil.Tx, []cipher.Address) error); ok {
		r1 = rf(_a0, _a1)
	} else {
		r1 = ret.Error(1)
	}

	return r0, r1
}

// GetUxHash provides a mock function with given fields: _a0
func (_m *MockUnspentPooler) GetUxHash(_a0 *dbutil.Tx) (cipher.SHA256, error) {
	ret := _m.Called(_a0)

	var r0 cipher.SHA256
	if rf, ok := ret.Get(0).(func(*dbutil.Tx) cipher.SHA256); ok {
		r0 = rf(_a0)
	} else {
		if ret.Get(0) != nil {
			r0 = ret.Get(0).(cipher.SHA256)
		}
	}

	var r1 error
	if rf, ok := ret.Get(1).(func(*dbutil.Tx) error); ok {
		r1 = rf(_a0)
	} else {
		r1 = ret.Error(1)
	}

	return r0, r1
}

// Len provides a mock function with given fields: _a0
func (_m *MockUnspentPooler) Len(_a0 *dbutil.Tx) (uint64, error) {
	ret := _m.Called(_a0)

	var r0 uint64
	if rf, ok := ret.Get(0).(func(*dbutil.Tx) uint64); ok {
		r0 = rf(_a0)
	} else {
		r0 = ret.Get(0).(uint64)
	}

	var r1 error
	if rf, ok := ret.Get(1).(func(*dbutil.Tx) error); ok {
		r1 = rf(_a0)
	} else {
		r1 = ret.Error(1)
	}

	return r0, r1
}

// MaybeBuildIndexes provides a mock function with given fields: _a0, _a1
func (_m *MockUnspentPooler) MaybeBuildIndexes(_a0 *dbutil.Tx, _a1 uint64) error {
	ret := _m.Called(_a0, _a1)

	var r0 error
	if rf, ok := ret.Get(0).(func(*dbutil.Tx, uint64) error); ok {
		r0 = rf(_a0, _a1)
	} else {
		r0 = ret.Error(0)
	}

	return r0
}

// ProcessBlock provides a mock function with given fields: _a0, _a1
func (_m *MockUnspentPooler) ProcessBlock(_a0 *dbutil.Tx, _a1 *coin.SignedBlock) error {
	ret := _m.Called(_a0, _a1)

	var r0 error
	if rf, ok := ret.Get(0).(func(*dbutil.Tx, *coin.SignedBlock) error); ok {
		r0 = rf(_a0, _a1)
	} else {
		r0 = ret.Error(0)
	}

	return r0
}
