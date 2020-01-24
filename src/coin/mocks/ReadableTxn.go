// Code generated by mockery v1.0.0. DO NOT EDIT.

package mocks

import (
	api "github.com/SkycoinProject/skycoin/src/api"
	mock "github.com/stretchr/testify/mock"
)

// ReadableTxn is an autogenerated mock type for the ReadableTxn type
type ReadableTxn struct {
	mock.Mock
}

// ToCreatedTransaction provides a mock function with given fields:
func (_m *ReadableTxn) ToCreatedTransaction() (*api.CreatedTransaction, error) {
	ret := _m.Called()

	var r0 *api.CreatedTransaction
	if rf, ok := ret.Get(0).(func() *api.CreatedTransaction); ok {
		r0 = rf()
	} else {
		if ret.Get(0) != nil {
			r0 = ret.Get(0).(*api.CreatedTransaction)
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
