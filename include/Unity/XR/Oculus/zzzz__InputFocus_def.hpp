#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(InputFocus)
namespace System {
class Action;
}
// Forward declare root types
namespace Unity::XR::Oculus {
class InputFocus;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::Oculus::InputFocus);
// Type: Unity.XR.Oculus::InputFocus
namespace Unity::XR::Oculus {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15126))
// CS Name: ::Unity.XR.Oculus::InputFocus*
class CORDL_TYPE InputFocus : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_InputFocusAcquired(::System::Action*  value) ;

static inline ::System::Action* getStaticF_InputFocusAcquired() ;

static inline void setStaticF_InputFocusLost(::System::Action*  value) ;

static inline ::System::Action* getStaticF_InputFocusLost() ;

static inline void setStaticF_hadInputFocus(bool  value) ;

static inline bool getStaticF_hadInputFocus() ;

/// @brief Method add_InputFocusAcquired addr 0x2c772a8 size 0xb8 virtual false final false
static inline void add_InputFocusAcquired(::System::Action*  value) ;

/// @brief Method remove_InputFocusAcquired addr 0x2c77360 size 0xb8 virtual false final false
static inline void remove_InputFocusAcquired(::System::Action*  value) ;

/// @brief Method add_InputFocusLost addr 0x2c77418 size 0xbc virtual false final false
static inline void add_InputFocusLost(::System::Action*  value) ;

/// @brief Method remove_InputFocusLost addr 0x2c774d4 size 0xbc virtual false final false
static inline void remove_InputFocusLost(::System::Action*  value) ;

/// @brief Method get_hasInputFocus addr 0x2c77590 size 0x4 virtual false final false
static inline bool get_hasInputFocus() ;

/// @brief Method Update addr 0x2c77598 size 0xa0 virtual false final false
static inline void Update() ;

static inline ::Unity::XR::Oculus::InputFocus* New_ctor() ;

/// @brief Method .ctor addr 0x2c77638 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "InputFocus", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputFocus(InputFocus && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputFocus", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputFocus(InputFocus const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InputFocus()  = default;
public:


// Fields

// Static field InputFocusAcquired

// Static field InputFocusLost

// Static field hadInputFocus


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::InputFocus, 0x10>, "Size mismatch!");

} // namespace end def Unity::XR::Oculus
NEED_NO_BOX(::Unity::XR::Oculus::InputFocus);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::InputFocus*, "Unity.XR.Oculus", "InputFocus");
