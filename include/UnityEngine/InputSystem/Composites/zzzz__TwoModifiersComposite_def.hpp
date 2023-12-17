#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputBindingComposite_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TwoModifiersComposite)
namespace UnityEngine::InputSystem {
struct InputBindingCompositeContext;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Composites {
class TwoModifiersComposite;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Composites::TwoModifiersComposite);
// Type: UnityEngine.InputSystem.Composites::TwoModifiersComposite
namespace UnityEngine::InputSystem::Composites {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6189))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6718))
// CS Name: ::UnityEngine.InputSystem.Composites::TwoModifiersComposite*
class CORDL_TYPE TwoModifiersComposite : public ::UnityEngine::InputSystem::InputBindingComposite {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::UnityEngine::InputSystem::InputBindingComposite)]{};

/// @brief Field modifier1 offset 0x10
 __declspec(property(get=__get_modifier1, put=__set_modifier1)) int32_t  modifier1;

/// @brief Field modifier2 offset 0x14
 __declspec(property(get=__get_modifier2, put=__set_modifier2)) int32_t  modifier2;

/// @brief Field binding offset 0x18
 __declspec(property(get=__get_binding, put=__set_binding)) int32_t  binding;

/// @brief Field overrideModifiersNeedToBePressedFirst offset 0x1c
 __declspec(property(get=__get_overrideModifiersNeedToBePressedFirst, put=__set_overrideModifiersNeedToBePressedFirst)) bool  overrideModifiersNeedToBePressedFirst;

/// @brief Field m_ValueSizeInBytes offset 0x20
 __declspec(property(get=__get_m_ValueSizeInBytes, put=__set_m_ValueSizeInBytes)) int32_t  m_ValueSizeInBytes;

/// @brief Field m_ValueType offset 0x28
 __declspec(property(get=__get_m_ValueType, put=__set_m_ValueType)) ::System::Type*  m_ValueType;

/// @brief Field m_BindingIsButton offset 0x30
 __declspec(property(get=__get_m_BindingIsButton, put=__set_m_BindingIsButton)) bool  m_BindingIsButton;

 __declspec(property(get=get_valueType)) ::System::Type*  valueType;

 __declspec(property(get=get_valueSizeInBytes)) int32_t  valueSizeInBytes;

constexpr void __set_modifier1(int32_t  value) ;

constexpr int32_t& __get_modifier1() ;

constexpr int32_t const& __get_modifier1() const;

constexpr void __set_modifier2(int32_t  value) ;

constexpr int32_t& __get_modifier2() ;

constexpr int32_t const& __get_modifier2() const;

constexpr void __set_binding(int32_t  value) ;

constexpr int32_t& __get_binding() ;

constexpr int32_t const& __get_binding() const;

constexpr void __set_overrideModifiersNeedToBePressedFirst(bool  value) ;

constexpr bool& __get_overrideModifiersNeedToBePressedFirst() ;

constexpr bool const& __get_overrideModifiersNeedToBePressedFirst() const;

constexpr void __set_m_ValueSizeInBytes(int32_t  value) ;

constexpr int32_t& __get_m_ValueSizeInBytes() ;

constexpr int32_t const& __get_m_ValueSizeInBytes() const;

constexpr void __set_m_ValueType(::System::Type*  value) ;

constexpr ::System::Type* __get_m_ValueType() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get_m_ValueType() const;

constexpr void __set_m_BindingIsButton(bool  value) ;

constexpr bool& __get_m_BindingIsButton() ;

constexpr bool const& __get_m_BindingIsButton() const;

/// @brief Method get_valueType addr 0x2a5b780 size 0x8 virtual true final false
inline ::System::Type* get_valueType() ;

/// @brief Method get_valueSizeInBytes addr 0x2a5b788 size 0x8 virtual true final false
inline int32_t get_valueSizeInBytes() ;

/// @brief Method EvaluateMagnitude addr 0x2a5b790 size 0x40 virtual true final false
inline float_t EvaluateMagnitude(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext>  context) ;

/// @brief Method ReadValue addr 0x2a5b88c size 0x64 virtual true final false
inline void ReadValue(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext>  context, ::cordl_internals::Ptr<void>  buffer, int32_t  bufferSize) ;

/// @brief Method ModifiersArePressed addr 0x2a5b7d0 size 0xbc virtual false final false
inline bool ModifiersArePressed(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext>  context) ;

/// @brief Method FinishSetup addr 0x2a5b8f0 size 0xac virtual true final false
inline void FinishSetup(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext>  context) ;

/// @brief Method ReadValueAsObject addr 0x2a5b99c size 0x64 virtual true final false
inline ::System::Object* ReadValueAsObject(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext>  context) ;

static inline ::UnityEngine::InputSystem::Composites::TwoModifiersComposite* New_ctor() ;

/// @brief Method .ctor addr 0x2a5ba00 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "TwoModifiersComposite", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TwoModifiersComposite(TwoModifiersComposite && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TwoModifiersComposite", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TwoModifiersComposite(TwoModifiersComposite const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TwoModifiersComposite()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Composites::TwoModifiersComposite, 0x38>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Composites
NEED_NO_BOX(::UnityEngine::InputSystem::Composites::TwoModifiersComposite);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Composites::TwoModifiersComposite*, "UnityEngine.InputSystem.Composites", "TwoModifiersComposite");
