#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VREvent_Keyboard_t)
// Forward declare root types
namespace OVR::OpenVR {
struct VREvent_Keyboard_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VREvent_Keyboard_t);
// Type: OVR.OpenVR::VREvent_Keyboard_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8674))
// CS Name: ::OVR.OpenVR::VREvent_Keyboard_t
struct CORDL_TYPE VREvent_Keyboard_t : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field cNewInput0 offset 0x0
 __declspec(property(get=__get_cNewInput0, put=__set_cNewInput0)) uint8_t  cNewInput0;

/// @brief Field cNewInput1 offset 0x1
 __declspec(property(get=__get_cNewInput1, put=__set_cNewInput1)) uint8_t  cNewInput1;

/// @brief Field cNewInput2 offset 0x2
 __declspec(property(get=__get_cNewInput2, put=__set_cNewInput2)) uint8_t  cNewInput2;

/// @brief Field cNewInput3 offset 0x3
 __declspec(property(get=__get_cNewInput3, put=__set_cNewInput3)) uint8_t  cNewInput3;

/// @brief Field cNewInput4 offset 0x4
 __declspec(property(get=__get_cNewInput4, put=__set_cNewInput4)) uint8_t  cNewInput4;

/// @brief Field cNewInput5 offset 0x5
 __declspec(property(get=__get_cNewInput5, put=__set_cNewInput5)) uint8_t  cNewInput5;

/// @brief Field cNewInput6 offset 0x6
 __declspec(property(get=__get_cNewInput6, put=__set_cNewInput6)) uint8_t  cNewInput6;

/// @brief Field cNewInput7 offset 0x7
 __declspec(property(get=__get_cNewInput7, put=__set_cNewInput7)) uint8_t  cNewInput7;

/// @brief Field uUserValue offset 0x8
 __declspec(property(get=__get_uUserValue, put=__set_uUserValue)) uint64_t  uUserValue;

 __declspec(property(get=get_cNewInput)) ::StringW  cNewInput;

constexpr void __set_cNewInput0(uint8_t  value) ;

constexpr uint8_t& __get_cNewInput0() ;

constexpr uint8_t const& __get_cNewInput0() const;

constexpr void __set_cNewInput1(uint8_t  value) ;

constexpr uint8_t& __get_cNewInput1() ;

constexpr uint8_t const& __get_cNewInput1() const;

constexpr void __set_cNewInput2(uint8_t  value) ;

constexpr uint8_t& __get_cNewInput2() ;

constexpr uint8_t const& __get_cNewInput2() const;

constexpr void __set_cNewInput3(uint8_t  value) ;

constexpr uint8_t& __get_cNewInput3() ;

constexpr uint8_t const& __get_cNewInput3() const;

constexpr void __set_cNewInput4(uint8_t  value) ;

constexpr uint8_t& __get_cNewInput4() ;

constexpr uint8_t const& __get_cNewInput4() const;

constexpr void __set_cNewInput5(uint8_t  value) ;

constexpr uint8_t& __get_cNewInput5() ;

constexpr uint8_t const& __get_cNewInput5() const;

constexpr void __set_cNewInput6(uint8_t  value) ;

constexpr uint8_t& __get_cNewInput6() ;

constexpr uint8_t const& __get_cNewInput6() const;

constexpr void __set_cNewInput7(uint8_t  value) ;

constexpr uint8_t& __get_cNewInput7() ;

constexpr uint8_t const& __get_cNewInput7() const;

constexpr void __set_uUserValue(uint64_t  value) ;

constexpr uint64_t& __get_uUserValue() ;

constexpr uint64_t const& __get_uUserValue() const;

/// @brief Method get_cNewInput addr 0x27f6660 size 0xec virtual false final false
inline ::StringW get_cNewInput() ;

// Ctor Parameters [CppParam { name: "cNewInput0", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "cNewInput1", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "cNewInput2", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "cNewInput3", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "cNewInput4", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "cNewInput5", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "cNewInput6", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "cNewInput7", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "uUserValue", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr VREvent_Keyboard_t(uint8_t  cNewInput0, uint8_t  cNewInput1, uint8_t  cNewInput2, uint8_t  cNewInput3, uint8_t  cNewInput4, uint8_t  cNewInput5, uint8_t  cNewInput6, uint8_t  cNewInput7, uint64_t  uUserValue) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit VREvent_Keyboard_t(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 VREvent_Keyboard_t()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VREvent_Keyboard_t, 0x10>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VREvent_Keyboard_t, "OVR.OpenVR", "VREvent_Keyboard_t");
