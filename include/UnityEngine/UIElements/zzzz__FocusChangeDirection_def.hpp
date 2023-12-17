#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FocusChangeDirection)
namespace UnityEngine::UIElements {
class Focusable;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::UIElements {
class FocusController;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class FocusChangeDirection;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::FocusChangeDirection);
// Type: UnityEngine.UIElements::FocusChangeDirection
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6881))
// CS Name: ::UnityEngine.UIElements::FocusChangeDirection*
class CORDL_TYPE FocusChangeDirection : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field m_Value offset 0x10
 __declspec(property(get=__get_m_Value, put=__set_m_Value)) int32_t  m_Value;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

static inline void setStaticF__unspecified_k__BackingField(::UnityEngine::UIElements::FocusChangeDirection*  value) ;

static inline ::UnityEngine::UIElements::FocusChangeDirection* getStaticF__unspecified_k__BackingField() ;

static inline void setStaticF__none_k__BackingField(::UnityEngine::UIElements::FocusChangeDirection*  value) ;

static inline ::UnityEngine::UIElements::FocusChangeDirection* getStaticF__none_k__BackingField() ;

static inline void setStaticF__lastValue_k__BackingField(::UnityEngine::UIElements::FocusChangeDirection*  value) ;

static inline ::UnityEngine::UIElements::FocusChangeDirection* getStaticF__lastValue_k__BackingField() ;

constexpr void __set_m_Value(int32_t  value) ;

constexpr int32_t& __get_m_Value() ;

constexpr int32_t const& __get_m_Value() const;

/// @brief Method get_unspecified addr 0x2dfa40c size 0x58 virtual false final false
static inline ::UnityEngine::UIElements::FocusChangeDirection* get_unspecified() ;

/// @brief Method get_none addr 0x2dfa464 size 0x58 virtual false final false
static inline ::UnityEngine::UIElements::FocusChangeDirection* get_none() ;

/// @brief Method get_lastValue addr 0x2dfa4bc size 0x58 virtual false final false
static inline ::UnityEngine::UIElements::FocusChangeDirection* get_lastValue() ;

static inline ::UnityEngine::UIElements::FocusChangeDirection* New_ctor(int32_t  value) ;

/// @brief Method .ctor addr 0x2dfa514 size 0x28 virtual false final false
inline void _ctor(int32_t  value) ;

/// @brief Method op_Implicit addr 0x2dfa53c size 0xc virtual false final false
static inline int32_t op_Implicit_int32_t(::UnityEngine::UIElements::FocusChangeDirection*  fcd) ;

/// @brief Method System.IDisposable.Dispose addr 0x2dfa548 size 0xc virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method Dispose addr 0x2dfa554 size 0x4 virtual true final false
inline void Dispose() ;

/// @brief Method ApplyTo addr 0x2dfa558 size 0x28 virtual true final false
inline void ApplyTo(::UnityEngine::UIElements::FocusController*  focusController, ::UnityEngine::UIElements::Focusable*  f) ;

// Ctor Parameters [CppParam { name: "", ty: "FocusChangeDirection", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FocusChangeDirection(FocusChangeDirection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FocusChangeDirection", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FocusChangeDirection(FocusChangeDirection const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FocusChangeDirection()  = default;
public:


// Fields

// Static field <unspecified>k__BackingField

// Static field <none>k__BackingField

// Static field <lastValue>k__BackingField


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::FocusChangeDirection, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::FocusChangeDirection);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::FocusChangeDirection*, "UnityEngine.UIElements", "FocusChangeDirection");
