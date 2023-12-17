#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputBindingComposite_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Vector3Composite)
namespace UnityEngine::InputSystem {
struct InputBindingCompositeContext;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::InputSystem::Composites {
struct __Vector3Composite__Mode;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Composites {
struct __Vector3Composite__Mode;
}
namespace UnityEngine::InputSystem::Composites {
class Vector3Composite;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::Composites::__Vector3Composite__Mode);
MARK_REF_PTR_T(::UnityEngine::InputSystem::Composites::Vector3Composite);
// Type: ::Mode
namespace UnityEngine::InputSystem::Composites {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6721))
// CS Name: ::Vector3Composite::Mode
struct CORDL_TYPE __Vector3Composite__Mode : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____Vector3Composite__Mode_Unwrapped
enum struct ____Vector3Composite__Mode_Unwrapped : int32_t {
__E_Analog = static_cast<int32_t>(0x0),
__E_DigitalNormalized = static_cast<int32_t>(0x1),
__E_Digital = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Analog value: static_cast<int32_t>(0x0)
static ::UnityEngine::InputSystem::Composites::__Vector3Composite__Mode const Analog;

/// @brief Field DigitalNormalized value: static_cast<int32_t>(0x1)
static ::UnityEngine::InputSystem::Composites::__Vector3Composite__Mode const DigitalNormalized;

/// @brief Field Digital value: static_cast<int32_t>(0x2)
static ::UnityEngine::InputSystem::Composites::__Vector3Composite__Mode const Digital;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____Vector3Composite__Mode_Unwrapped () const noexcept {
return std::bit_cast<____Vector3Composite__Mode_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __Vector3Composite__Mode(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __Vector3Composite__Mode(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __Vector3Composite__Mode()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Composites::__Vector3Composite__Mode, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Composites
// Type: UnityEngine.InputSystem.Composites::Vector3Composite
namespace UnityEngine::InputSystem::Composites {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6190)), TypeDefinitionIndex(TypeDefinitionIndex(10249)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6190), inst: 412 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6722))
// CS Name: ::UnityEngine.InputSystem.Composites::Vector3Composite*
class CORDL_TYPE Vector3Composite : public ::UnityEngine::InputSystem::InputBindingComposite_1<::UnityEngine::Vector3> {
public:
// Declarations
using Mode = ::UnityEngine::InputSystem::Composites::__Vector3Composite__Mode;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::InputSystem::InputBindingComposite_1<::UnityEngine::Vector3>)]{};

/// @brief Field up offset 0x10
 __declspec(property(get=__get_up, put=__set_up)) int32_t  up;

/// @brief Field down offset 0x14
 __declspec(property(get=__get_down, put=__set_down)) int32_t  down;

/// @brief Field left offset 0x18
 __declspec(property(get=__get_left, put=__set_left)) int32_t  left;

/// @brief Field right offset 0x1c
 __declspec(property(get=__get_right, put=__set_right)) int32_t  right;

/// @brief Field forward offset 0x20
 __declspec(property(get=__get_forward, put=__set_forward)) int32_t  forward;

/// @brief Field backward offset 0x24
 __declspec(property(get=__get_backward, put=__set_backward)) int32_t  backward;

/// @brief Field mode offset 0x28
 __declspec(property(get=__get_mode, put=__set_mode)) ::UnityEngine::InputSystem::Composites::__Vector3Composite__Mode  mode;

constexpr void __set_up(int32_t  value) ;

constexpr int32_t& __get_up() ;

constexpr int32_t const& __get_up() const;

constexpr void __set_down(int32_t  value) ;

constexpr int32_t& __get_down() ;

constexpr int32_t const& __get_down() const;

constexpr void __set_left(int32_t  value) ;

constexpr int32_t& __get_left() ;

constexpr int32_t const& __get_left() const;

constexpr void __set_right(int32_t  value) ;

constexpr int32_t& __get_right() ;

constexpr int32_t const& __get_right() const;

constexpr void __set_forward(int32_t  value) ;

constexpr int32_t& __get_forward() ;

constexpr int32_t const& __get_forward() const;

constexpr void __set_backward(int32_t  value) ;

constexpr int32_t& __get_backward() ;

constexpr int32_t const& __get_backward() const;

constexpr void __set_mode(::UnityEngine::InputSystem::Composites::__Vector3Composite__Mode  value) ;

constexpr ::UnityEngine::InputSystem::Composites::__Vector3Composite__Mode& __get_mode() ;

constexpr ::UnityEngine::InputSystem::Composites::__Vector3Composite__Mode const& __get_mode() const;

/// @brief Method ReadValue addr 0x2a5bc2c size 0x254 virtual true final false
inline ::UnityEngine::Vector3 ReadValue(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext>  context) ;

static inline ::UnityEngine::InputSystem::Composites::Vector3Composite* New_ctor() ;

/// @brief Method .ctor addr 0x2a5be80 size 0x1048 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "Vector3Composite", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Vector3Composite(Vector3Composite && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Vector3Composite", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Vector3Composite(Vector3Composite const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Vector3Composite()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Composites::Vector3Composite, 0x30>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Composites
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Composites::__Vector3Composite__Mode, "UnityEngine.InputSystem.Composites", "Vector3Composite/Mode");
NEED_NO_BOX(::UnityEngine::InputSystem::Composites::Vector3Composite);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Composites::Vector3Composite*, "UnityEngine.InputSystem.Composites", "Vector3Composite");
