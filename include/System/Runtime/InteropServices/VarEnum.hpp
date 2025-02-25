// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.InteropServices.VarEnum
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: DA411C
  struct VarEnum/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: VarEnum
    constexpr VarEnum(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Runtime.InteropServices.VarEnum VT_EMPTY
    static constexpr const int VT_EMPTY = 0;
    // Get static field: static public System.Runtime.InteropServices.VarEnum VT_EMPTY
    static System::Runtime::InteropServices::VarEnum _get_VT_EMPTY();
    // Set static field: static public System.Runtime.InteropServices.VarEnum VT_EMPTY
    static void _set_VT_EMPTY(System::Runtime::InteropServices::VarEnum value);
    // static field const value: static public System.Runtime.InteropServices.VarEnum VT_NULL
    static constexpr const int VT_NULL = 1;
    // Get static field: static public System.Runtime.InteropServices.VarEnum VT_NULL
    static System::Runtime::InteropServices::VarEnum _get_VT_NULL();
    // Set static field: static public System.Runtime.InteropServices.VarEnum VT_NULL
    static void _set_VT_NULL(System::Runtime::InteropServices::VarEnum value);
    // static field const value: static public System.Runtime.InteropServices.VarEnum VT_I2
    static constexpr const int VT_I2 = 2;
    // Get static field: static public System.Runtime.InteropServices.VarEnum VT_I2
    static System::Runtime::InteropServices::VarEnum _get_VT_I2();
    // Set static field: static public System.Runtime.InteropServices.VarEnum VT_I2
    static void _set_VT_I2(System::Runtime::InteropServices::VarEnum value);
    // static field const value: static public System.Runtime.InteropServices.VarEnum VT_I4
    static constexpr const int VT_I4 = 3;
    // Get static field: static public System.Runtime.InteropServices.VarEnum VT_I4
    static System::Runtime::InteropServices::VarEnum _get_VT_I4();
    // Set static field: static public System.Runtime.InteropServices.VarEnum VT_I4
    static void _set_VT_I4(System::Runtime::InteropServices::VarEnum value);
    // static field const value: static public System.Runtime.InteropServices.VarEnum VT_R4
    static constexpr const int VT_R4 = 4;
    // Get static field: static public System.Runtime.InteropServices.VarEnum VT_R4
    static System::Runtime::InteropServices::VarEnum _get_VT_R4();
    // Set static field: static public System.Runtime.InteropServices.VarEnum VT_R4
    static void _set_VT_R4(System::Runtime::InteropServices::VarEnum value);
    // static field const value: static public System.Runtime.InteropServices.VarEnum VT_R8
    static constexpr const int VT_R8 = 5;
    // Get static field: static public System.Runtime.InteropServices.VarEnum VT_R8
    static System::Runtime::InteropServices::VarEnum _get_VT_R8();
    // Set static field: static public System.Runtime.InteropServices.VarEnum VT_R8
    static void _set_VT_R8(System::Runtime::InteropServices::VarEnum value);
    // static field const value: static public System.Runtime.InteropServices.VarEnum VT_CY
    static constexpr const int VT_CY = 6;
    // Get static field: static public System.Runtime.InteropServices.VarEnum VT_CY
    static System::Runtime::InteropServices::VarEnum _get_VT_CY();
    // Set static field: static public System.Runtime.InteropServices.VarEnum VT_CY
    static void _set_VT_CY(System::Runtime::InteropServices::VarEnum value);
    // static field const value: static public System.Runtime.InteropServices.VarEnum VT_DATE
    static constexpr const int VT_DATE = 7;
    // Get static field: static public System.Runtime.InteropServices.VarEnum VT_DATE
    static System::Runtime::InteropServices::VarEnum _get_VT_DATE();
    // Set static field: static public System.Runtime.InteropServices.VarEnum VT_DATE
    static void _set_VT_DATE(System::Runtime::InteropServices::VarEnum value);
    // static field const value: static public System.Runtime.InteropServices.VarEnum VT_BSTR
    static constexpr const int VT_BSTR = 8;
    // Get static field: static public System.Runtime.InteropServices.VarEnum VT_BSTR
    static System::Runtime::InteropServices::VarEnum _get_VT_BSTR();
    // Set static field: static public System.Runtime.InteropServices.VarEnum VT_BSTR
    static void _set_VT_BSTR(System::Runtime::InteropServices::VarEnum value);
    // static field const value: static public System.Runtime.InteropServices.VarEnum VT_DISPATCH
    static constexpr const int VT_DISPATCH = 9;
    // Get static field: static public System.Runtime.InteropServices.VarEnum VT_DISPATCH
    static System::Runtime::InteropServices::VarEnum _get_VT_DISPATCH();
    // Set static field: static public System.Runtime.InteropServices.VarEnum VT_DISPATCH
    static void _set_VT_DISPATCH(System::Runtime::InteropServices::VarEnum value);
    // static field const value: static public System.Runtime.InteropServices.VarEnum VT_ERROR
    static constexpr const int VT_ERROR = 10;
    // Get static field: static public System.Runtime.InteropServices.VarEnum VT_ERROR
    static System::Runtime::InteropServices::VarEnum _get_VT_ERROR();
    // Set static field: static public System.Runtime.InteropServices.VarEnum VT_ERROR
    static void _set_VT_ERROR(System::Runtime::InteropServices::VarEnum value);
    // static field const value: static public System.Runtime.InteropServices.VarEnum VT_BOOL
    static constexpr const int VT_BOOL = 11;
    // Get static field: static public System.Runtime.InteropServices.VarEnum VT_BOOL
    static System::Runtime::InteropServices::VarEnum _get_VT_BOOL();
    // Set static field: static public System.Runtime.InteropServices.VarEnum VT_BOOL
    static void _set_VT_BOOL(System::Runtime::InteropServices::VarEnum value);
    // static field const value: static public System.Runtime.InteropServices.VarEnum VT_VARIANT
    static constexpr const int VT_VARIANT = 12;
    // Get static field: static public System.Runtime.InteropServices.VarEnum VT_VARIANT
    static System::Runtime::InteropServices::VarEnum _get_VT_VARIANT();
    // Set static field: static public System.Runtime.InteropServices.VarEnum VT_VARIANT
    static void _set_VT_VARIANT(System::Runtime::InteropServices::VarEnum value);
    // static field const value: static public System.Runtime.InteropServices.VarEnum VT_UNKNOWN
    static constexpr const int VT_UNKNOWN = 13;
    // Get static field: static public System.Runtime.InteropServices.VarEnum VT_UNKNOWN
    static System::Runtime::InteropServices::VarEnum _get_VT_UNKNOWN();
    // Set static field: static public System.Runtime.InteropServices.VarEnum VT_UNKNOWN
    static void _set_VT_UNKNOWN(System::Runtime::InteropServices::VarEnum value);
    // static field const value: static public System.Runtime.InteropServices.VarEnum VT_DECIMAL
    static constexpr const int VT_DECIMAL = 14;
    // Get static field: static public System.Runtime.InteropServices.VarEnum VT_DECIMAL
    static System::Runtime::InteropServices::VarEnum _get_VT_DECIMAL();
    // Set static field: static public System.Runtime.InteropServices.VarEnum VT_DECIMAL
    static void _set_VT_DECIMAL(System::Runtime::InteropServices::VarEnum value);
    // static field const value: static public System.Runtime.InteropServices.VarEnum VT_I1
    static constexpr const int VT_I1 = 16;
    // Get static field: static public System.Runtime.InteropServices.VarEnum VT_I1
    static System::Runtime::InteropServices::VarEnum _get_VT_I1();
    // Set static field: static public System.Runtime.InteropServices.VarEnum VT_I1
    static void _set_VT_I1(System::Runtime::InteropServices::VarEnum value);
    // static field const value: static public System.Runtime.InteropServices.VarEnum VT_UI1
    static constexpr const int VT_UI1 = 17;
    // Get static field: static public System.Runtime.InteropServices.VarEnum VT_UI1
    static System::Runtime::InteropServices::VarEnum _get_VT_UI1();
    // Set static field: static public System.Runtime.InteropServices.VarEnum VT_UI1
    static void _set_VT_UI1(System::Runtime::InteropServices::VarEnum value);
    // static field const value: static public System.Runtime.InteropServices.VarEnum VT_UI2
    static constexpr const int VT_UI2 = 18;
    // Get static field: static public System.Runtime.InteropServices.VarEnum VT_UI2
    static System::Runtime::InteropServices::VarEnum _get_VT_UI2();
    // Set static field: static public System.Runtime.InteropServices.VarEnum VT_UI2
    static void _set_VT_UI2(System::Runtime::InteropServices::VarEnum value);
    // static field const value: static public System.Runtime.InteropServices.VarEnum VT_UI4
    static constexpr const int VT_UI4 = 19;
    // Get static field: static public System.Runtime.InteropServices.VarEnum VT_UI4
    static System::Runtime::InteropServices::VarEnum _get_VT_UI4();
    // Set static field: static public System.Runtime.InteropServices.VarEnum VT_UI4
    static void _set_VT_UI4(System::Runtime::InteropServices::VarEnum value);
    // static field const value: static public System.Runtime.InteropServices.VarEnum VT_I8
    static constexpr const int VT_I8 = 20;
    // Get static field: static public System.Runtime.InteropServices.VarEnum VT_I8
    static System::Runtime::InteropServices::VarEnum _get_VT_I8();
    // Set static field: static public System.Runtime.InteropServices.VarEnum VT_I8
    static void _set_VT_I8(System::Runtime::InteropServices::VarEnum value);
    // static field const value: static public System.Runtime.InteropServices.VarEnum VT_UI8
    static constexpr const int VT_UI8 = 21;
    // Get static field: static public System.Runtime.InteropServices.VarEnum VT_UI8
    static System::Runtime::InteropServices::VarEnum _get_VT_UI8();
    // Set static field: static public System.Runtime.InteropServices.VarEnum VT_UI8
    static void _set_VT_UI8(System::Runtime::InteropServices::VarEnum value);
    // static field const value: static public System.Runtime.InteropServices.VarEnum VT_INT
    static constexpr const int VT_INT = 22;
    // Get static field: static public System.Runtime.InteropServices.VarEnum VT_INT
    static System::Runtime::InteropServices::VarEnum _get_VT_INT();
    // Set static field: static public System.Runtime.InteropServices.VarEnum VT_INT
    static void _set_VT_INT(System::Runtime::InteropServices::VarEnum value);
    // static field const value: static public System.Runtime.InteropServices.VarEnum VT_UINT
    static constexpr const int VT_UINT = 23;
    // Get static field: static public System.Runtime.InteropServices.VarEnum VT_UINT
    static System::Runtime::InteropServices::VarEnum _get_VT_UINT();
    // Set static field: static public System.Runtime.InteropServices.VarEnum VT_UINT
    static void _set_VT_UINT(System::Runtime::InteropServices::VarEnum value);
    // static field const value: static public System.Runtime.InteropServices.VarEnum VT_VOID
    static constexpr const int VT_VOID = 24;
    // Get static field: static public System.Runtime.InteropServices.VarEnum VT_VOID
    static System::Runtime::InteropServices::VarEnum _get_VT_VOID();
    // Set static field: static public System.Runtime.InteropServices.VarEnum VT_VOID
    static void _set_VT_VOID(System::Runtime::InteropServices::VarEnum value);
    // static field const value: static public System.Runtime.InteropServices.VarEnum VT_HRESULT
    static constexpr const int VT_HRESULT = 25;
    // Get static field: static public System.Runtime.InteropServices.VarEnum VT_HRESULT
    static System::Runtime::InteropServices::VarEnum _get_VT_HRESULT();
    // Set static field: static public System.Runtime.InteropServices.VarEnum VT_HRESULT
    static void _set_VT_HRESULT(System::Runtime::InteropServices::VarEnum value);
    // static field const value: static public System.Runtime.InteropServices.VarEnum VT_PTR
    static constexpr const int VT_PTR = 26;
    // Get static field: static public System.Runtime.InteropServices.VarEnum VT_PTR
    static System::Runtime::InteropServices::VarEnum _get_VT_PTR();
    // Set static field: static public System.Runtime.InteropServices.VarEnum VT_PTR
    static void _set_VT_PTR(System::Runtime::InteropServices::VarEnum value);
    // static field const value: static public System.Runtime.InteropServices.VarEnum VT_SAFEARRAY
    static constexpr const int VT_SAFEARRAY = 27;
    // Get static field: static public System.Runtime.InteropServices.VarEnum VT_SAFEARRAY
    static System::Runtime::InteropServices::VarEnum _get_VT_SAFEARRAY();
    // Set static field: static public System.Runtime.InteropServices.VarEnum VT_SAFEARRAY
    static void _set_VT_SAFEARRAY(System::Runtime::InteropServices::VarEnum value);
    // static field const value: static public System.Runtime.InteropServices.VarEnum VT_CARRAY
    static constexpr const int VT_CARRAY = 28;
    // Get static field: static public System.Runtime.InteropServices.VarEnum VT_CARRAY
    static System::Runtime::InteropServices::VarEnum _get_VT_CARRAY();
    // Set static field: static public System.Runtime.InteropServices.VarEnum VT_CARRAY
    static void _set_VT_CARRAY(System::Runtime::InteropServices::VarEnum value);
    // static field const value: static public System.Runtime.InteropServices.VarEnum VT_USERDEFINED
    static constexpr const int VT_USERDEFINED = 29;
    // Get static field: static public System.Runtime.InteropServices.VarEnum VT_USERDEFINED
    static System::Runtime::InteropServices::VarEnum _get_VT_USERDEFINED();
    // Set static field: static public System.Runtime.InteropServices.VarEnum VT_USERDEFINED
    static void _set_VT_USERDEFINED(System::Runtime::InteropServices::VarEnum value);
    // static field const value: static public System.Runtime.InteropServices.VarEnum VT_LPSTR
    static constexpr const int VT_LPSTR = 30;
    // Get static field: static public System.Runtime.InteropServices.VarEnum VT_LPSTR
    static System::Runtime::InteropServices::VarEnum _get_VT_LPSTR();
    // Set static field: static public System.Runtime.InteropServices.VarEnum VT_LPSTR
    static void _set_VT_LPSTR(System::Runtime::InteropServices::VarEnum value);
    // static field const value: static public System.Runtime.InteropServices.VarEnum VT_LPWSTR
    static constexpr const int VT_LPWSTR = 31;
    // Get static field: static public System.Runtime.InteropServices.VarEnum VT_LPWSTR
    static System::Runtime::InteropServices::VarEnum _get_VT_LPWSTR();
    // Set static field: static public System.Runtime.InteropServices.VarEnum VT_LPWSTR
    static void _set_VT_LPWSTR(System::Runtime::InteropServices::VarEnum value);
    // static field const value: static public System.Runtime.InteropServices.VarEnum VT_RECORD
    static constexpr const int VT_RECORD = 36;
    // Get static field: static public System.Runtime.InteropServices.VarEnum VT_RECORD
    static System::Runtime::InteropServices::VarEnum _get_VT_RECORD();
    // Set static field: static public System.Runtime.InteropServices.VarEnum VT_RECORD
    static void _set_VT_RECORD(System::Runtime::InteropServices::VarEnum value);
    // static field const value: static public System.Runtime.InteropServices.VarEnum VT_FILETIME
    static constexpr const int VT_FILETIME = 64;
    // Get static field: static public System.Runtime.InteropServices.VarEnum VT_FILETIME
    static System::Runtime::InteropServices::VarEnum _get_VT_FILETIME();
    // Set static field: static public System.Runtime.InteropServices.VarEnum VT_FILETIME
    static void _set_VT_FILETIME(System::Runtime::InteropServices::VarEnum value);
    // static field const value: static public System.Runtime.InteropServices.VarEnum VT_BLOB
    static constexpr const int VT_BLOB = 65;
    // Get static field: static public System.Runtime.InteropServices.VarEnum VT_BLOB
    static System::Runtime::InteropServices::VarEnum _get_VT_BLOB();
    // Set static field: static public System.Runtime.InteropServices.VarEnum VT_BLOB
    static void _set_VT_BLOB(System::Runtime::InteropServices::VarEnum value);
    // static field const value: static public System.Runtime.InteropServices.VarEnum VT_STREAM
    static constexpr const int VT_STREAM = 66;
    // Get static field: static public System.Runtime.InteropServices.VarEnum VT_STREAM
    static System::Runtime::InteropServices::VarEnum _get_VT_STREAM();
    // Set static field: static public System.Runtime.InteropServices.VarEnum VT_STREAM
    static void _set_VT_STREAM(System::Runtime::InteropServices::VarEnum value);
    // static field const value: static public System.Runtime.InteropServices.VarEnum VT_STORAGE
    static constexpr const int VT_STORAGE = 67;
    // Get static field: static public System.Runtime.InteropServices.VarEnum VT_STORAGE
    static System::Runtime::InteropServices::VarEnum _get_VT_STORAGE();
    // Set static field: static public System.Runtime.InteropServices.VarEnum VT_STORAGE
    static void _set_VT_STORAGE(System::Runtime::InteropServices::VarEnum value);
    // static field const value: static public System.Runtime.InteropServices.VarEnum VT_STREAMED_OBJECT
    static constexpr const int VT_STREAMED_OBJECT = 68;
    // Get static field: static public System.Runtime.InteropServices.VarEnum VT_STREAMED_OBJECT
    static System::Runtime::InteropServices::VarEnum _get_VT_STREAMED_OBJECT();
    // Set static field: static public System.Runtime.InteropServices.VarEnum VT_STREAMED_OBJECT
    static void _set_VT_STREAMED_OBJECT(System::Runtime::InteropServices::VarEnum value);
    // static field const value: static public System.Runtime.InteropServices.VarEnum VT_STORED_OBJECT
    static constexpr const int VT_STORED_OBJECT = 69;
    // Get static field: static public System.Runtime.InteropServices.VarEnum VT_STORED_OBJECT
    static System::Runtime::InteropServices::VarEnum _get_VT_STORED_OBJECT();
    // Set static field: static public System.Runtime.InteropServices.VarEnum VT_STORED_OBJECT
    static void _set_VT_STORED_OBJECT(System::Runtime::InteropServices::VarEnum value);
    // static field const value: static public System.Runtime.InteropServices.VarEnum VT_BLOB_OBJECT
    static constexpr const int VT_BLOB_OBJECT = 70;
    // Get static field: static public System.Runtime.InteropServices.VarEnum VT_BLOB_OBJECT
    static System::Runtime::InteropServices::VarEnum _get_VT_BLOB_OBJECT();
    // Set static field: static public System.Runtime.InteropServices.VarEnum VT_BLOB_OBJECT
    static void _set_VT_BLOB_OBJECT(System::Runtime::InteropServices::VarEnum value);
    // static field const value: static public System.Runtime.InteropServices.VarEnum VT_CF
    static constexpr const int VT_CF = 71;
    // Get static field: static public System.Runtime.InteropServices.VarEnum VT_CF
    static System::Runtime::InteropServices::VarEnum _get_VT_CF();
    // Set static field: static public System.Runtime.InteropServices.VarEnum VT_CF
    static void _set_VT_CF(System::Runtime::InteropServices::VarEnum value);
    // static field const value: static public System.Runtime.InteropServices.VarEnum VT_CLSID
    static constexpr const int VT_CLSID = 72;
    // Get static field: static public System.Runtime.InteropServices.VarEnum VT_CLSID
    static System::Runtime::InteropServices::VarEnum _get_VT_CLSID();
    // Set static field: static public System.Runtime.InteropServices.VarEnum VT_CLSID
    static void _set_VT_CLSID(System::Runtime::InteropServices::VarEnum value);
    // static field const value: static public System.Runtime.InteropServices.VarEnum VT_VECTOR
    static constexpr const int VT_VECTOR = 4096;
    // Get static field: static public System.Runtime.InteropServices.VarEnum VT_VECTOR
    static System::Runtime::InteropServices::VarEnum _get_VT_VECTOR();
    // Set static field: static public System.Runtime.InteropServices.VarEnum VT_VECTOR
    static void _set_VT_VECTOR(System::Runtime::InteropServices::VarEnum value);
    // static field const value: static public System.Runtime.InteropServices.VarEnum VT_ARRAY
    static constexpr const int VT_ARRAY = 8192;
    // Get static field: static public System.Runtime.InteropServices.VarEnum VT_ARRAY
    static System::Runtime::InteropServices::VarEnum _get_VT_ARRAY();
    // Set static field: static public System.Runtime.InteropServices.VarEnum VT_ARRAY
    static void _set_VT_ARRAY(System::Runtime::InteropServices::VarEnum value);
    // static field const value: static public System.Runtime.InteropServices.VarEnum VT_BYREF
    static constexpr const int VT_BYREF = 16384;
    // Get static field: static public System.Runtime.InteropServices.VarEnum VT_BYREF
    static System::Runtime::InteropServices::VarEnum _get_VT_BYREF();
    // Set static field: static public System.Runtime.InteropServices.VarEnum VT_BYREF
    static void _set_VT_BYREF(System::Runtime::InteropServices::VarEnum value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.Runtime.InteropServices.VarEnum
  #pragma pack(pop)
  static check_size<sizeof(VarEnum), 0 + sizeof(int)> __System_Runtime_InteropServices_VarEnumSizeCheck;
  static_assert(sizeof(VarEnum) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::VarEnum, "System.Runtime.InteropServices", "VarEnum");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
