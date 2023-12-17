#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Variant)
namespace System {
struct BRECORD;
}
// Forward declare root types
namespace System {
struct Variant;
}
// Write type traits
MARK_VAL_T(::System::Variant);
// Type: System::Variant
namespace System {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2640))
// CS Name: ::System::Variant
struct CORDL_TYPE Variant : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field vt offset 0x0
 __declspec(property(get=__get_vt, put=__set_vt)) int16_t  vt;

/// @brief Field wReserved1 offset 0x2
 __declspec(property(get=__get_wReserved1, put=__set_wReserved1)) uint16_t  wReserved1;

/// @brief Field wReserved2 offset 0x4
 __declspec(property(get=__get_wReserved2, put=__set_wReserved2)) uint16_t  wReserved2;

/// @brief Field wReserved3 offset 0x6
 __declspec(property(get=__get_wReserved3, put=__set_wReserved3)) uint16_t  wReserved3;

/// @brief Field llVal offset 0x8
 __declspec(property(get=__get_llVal, put=__set_llVal)) int64_t  llVal;

/// @brief Field lVal offset 0x8
 __declspec(property(get=__get_lVal, put=__set_lVal)) int32_t  lVal;

/// @brief Field bVal offset 0x8
 __declspec(property(get=__get_bVal, put=__set_bVal)) uint8_t  bVal;

/// @brief Field iVal offset 0x8
 __declspec(property(get=__get_iVal, put=__set_iVal)) int16_t  iVal;

/// @brief Field fltVal offset 0x8
 __declspec(property(get=__get_fltVal, put=__set_fltVal)) float_t  fltVal;

/// @brief Field dblVal offset 0x8
 __declspec(property(get=__get_dblVal, put=__set_dblVal)) double_t  dblVal;

/// @brief Field boolVal offset 0x8
 __declspec(property(get=__get_boolVal, put=__set_boolVal)) int16_t  boolVal;

/// @brief Field bstrVal offset 0x8
 __declspec(property(get=__get_bstrVal, put=__set_bstrVal)) ::cordl_internals::intptr_t  bstrVal;

/// @brief Field cVal offset 0x8
 __declspec(property(get=__get_cVal, put=__set_cVal)) int8_t  cVal;

/// @brief Field uiVal offset 0x8
 __declspec(property(get=__get_uiVal, put=__set_uiVal)) uint16_t  uiVal;

/// @brief Field ulVal offset 0x8
 __declspec(property(get=__get_ulVal, put=__set_ulVal)) uint32_t  ulVal;

/// @brief Field ullVal offset 0x8
 __declspec(property(get=__get_ullVal, put=__set_ullVal)) uint64_t  ullVal;

/// @brief Field intVal offset 0x8
 __declspec(property(get=__get_intVal, put=__set_intVal)) int32_t  intVal;

/// @brief Field uintVal offset 0x8
 __declspec(property(get=__get_uintVal, put=__set_uintVal)) uint32_t  uintVal;

/// @brief Field pdispVal offset 0x8
 __declspec(property(get=__get_pdispVal, put=__set_pdispVal)) ::cordl_internals::intptr_t  pdispVal;

/// @brief Field bRecord offset 0x8
 __declspec(property(get=__get_bRecord, put=__set_bRecord)) ::System::BRECORD  bRecord;

constexpr void __set_vt(int16_t  value) ;

constexpr int16_t& __get_vt() ;

constexpr int16_t const& __get_vt() const;

constexpr void __set_wReserved1(uint16_t  value) ;

constexpr uint16_t& __get_wReserved1() ;

constexpr uint16_t const& __get_wReserved1() const;

constexpr void __set_wReserved2(uint16_t  value) ;

constexpr uint16_t& __get_wReserved2() ;

constexpr uint16_t const& __get_wReserved2() const;

constexpr void __set_wReserved3(uint16_t  value) ;

constexpr uint16_t& __get_wReserved3() ;

constexpr uint16_t const& __get_wReserved3() const;

constexpr void __set_llVal(int64_t  value) ;

constexpr int64_t& __get_llVal() ;

constexpr int64_t const& __get_llVal() const;

constexpr void __set_lVal(int32_t  value) ;

constexpr int32_t& __get_lVal() ;

constexpr int32_t const& __get_lVal() const;

constexpr void __set_bVal(uint8_t  value) ;

constexpr uint8_t& __get_bVal() ;

constexpr uint8_t const& __get_bVal() const;

constexpr void __set_iVal(int16_t  value) ;

constexpr int16_t& __get_iVal() ;

constexpr int16_t const& __get_iVal() const;

constexpr void __set_fltVal(float_t  value) ;

constexpr float_t& __get_fltVal() ;

constexpr float_t const& __get_fltVal() const;

constexpr void __set_dblVal(double_t  value) ;

constexpr double_t& __get_dblVal() ;

constexpr double_t const& __get_dblVal() const;

constexpr void __set_boolVal(int16_t  value) ;

constexpr int16_t& __get_boolVal() ;

constexpr int16_t const& __get_boolVal() const;

constexpr void __set_bstrVal(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_bstrVal() ;

constexpr ::cordl_internals::intptr_t const& __get_bstrVal() const;

constexpr void __set_cVal(int8_t  value) ;

constexpr int8_t& __get_cVal() ;

constexpr int8_t const& __get_cVal() const;

constexpr void __set_uiVal(uint16_t  value) ;

constexpr uint16_t& __get_uiVal() ;

constexpr uint16_t const& __get_uiVal() const;

constexpr void __set_ulVal(uint32_t  value) ;

constexpr uint32_t& __get_ulVal() ;

constexpr uint32_t const& __get_ulVal() const;

constexpr void __set_ullVal(uint64_t  value) ;

constexpr uint64_t& __get_ullVal() ;

constexpr uint64_t const& __get_ullVal() const;

constexpr void __set_intVal(int32_t  value) ;

constexpr int32_t& __get_intVal() ;

constexpr int32_t const& __get_intVal() const;

constexpr void __set_uintVal(uint32_t  value) ;

constexpr uint32_t& __get_uintVal() ;

constexpr uint32_t const& __get_uintVal() const;

constexpr void __set_pdispVal(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_pdispVal() ;

constexpr ::cordl_internals::intptr_t const& __get_pdispVal() const;

constexpr void __set_bRecord(::System::BRECORD  value) ;

constexpr ::System::BRECORD& __get_bRecord() ;

constexpr ::System::BRECORD const& __get_bRecord() const;

/// @brief Method Clear addr 0x260908c size 0x74 virtual false final false
inline void Clear() ;

// Ctor Parameters [CppParam { name: "vt", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "wReserved1", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "wReserved2", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "wReserved3", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "llVal", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "lVal", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "bVal", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "iVal", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "fltVal", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "dblVal", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "boolVal", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "bstrVal", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "cVal", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "uiVal", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "ulVal", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "ullVal", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "intVal", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "uintVal", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "pdispVal", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "bRecord", ty: "::System::BRECORD", modifiers: "", def_value: None }]
constexpr Variant(int16_t  vt, uint16_t  wReserved1, uint16_t  wReserved2, uint16_t  wReserved3, int64_t  llVal, int32_t  lVal, uint8_t  bVal, int16_t  iVal, float_t  fltVal, double_t  dblVal, int16_t  boolVal, ::cordl_internals::intptr_t  bstrVal, int8_t  cVal, uint16_t  uiVal, uint32_t  ulVal, uint64_t  ullVal, int32_t  intVal, uint32_t  uintVal, ::cordl_internals::intptr_t  pdispVal, ::System::BRECORD  bRecord) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Variant(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Variant()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Variant, 0x18>, "Size mismatch!");

} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(::System::Variant, "System", "Variant");
