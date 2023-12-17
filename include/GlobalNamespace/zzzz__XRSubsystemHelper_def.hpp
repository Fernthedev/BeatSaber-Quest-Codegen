#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(XRSubsystemHelper)
namespace UnityEngine::XR {
class XRInputSubsystem;
}
namespace UnityEngine::XR {
class XRDisplaySubsystemDescriptor;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class XRSubsystemHelper;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::XRSubsystemHelper);
// Type: ::XRSubsystemHelper
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14441))
// CS Name: ::XRSubsystemHelper*
class CORDL_TYPE XRSubsystemHelper : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_s_displaySubsystems(::System::Collections::Generic::List_1<Il2CppObject*>*  value) ;

static inline ::System::Collections::Generic::List_1<Il2CppObject*>* getStaticF_s_displaySubsystems() ;

static inline void setStaticF_s_displaySubsystemDescriptors(::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystemDescriptor*>*  value) ;

static inline ::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystemDescriptor*>* getStaticF_s_displaySubsystemDescriptors() ;

static inline void setStaticF_s_inputSubsystems(::System::Collections::Generic::List_1<::UnityEngine::XR::XRInputSubsystem*>*  value) ;

static inline ::System::Collections::Generic::List_1<::UnityEngine::XR::XRInputSubsystem*>* getStaticF_s_inputSubsystems() ;

/// @brief Method GetCurrentDisplaySubsystem addr 0x2100c20 size 0x140 virtual false final false
static inline Il2CppObject* GetCurrentDisplaySubsystem() ;

/// @brief Method GetCurrentDisplaySubsystemDescriptor addr 0x2100d60 size 0x138 virtual false final false
static inline ::UnityEngine::XR::XRDisplaySubsystemDescriptor* GetCurrentDisplaySubsystemDescriptor() ;

/// @brief Method GetCurrentInputSubsystem addr 0x2100e98 size 0x138 virtual false final false
static inline ::UnityEngine::XR::XRInputSubsystem* GetCurrentInputSubsystem() ;

// Ctor Parameters [CppParam { name: "", ty: "XRSubsystemHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XRSubsystemHelper(XRSubsystemHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRSubsystemHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRSubsystemHelper(XRSubsystemHelper const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 XRSubsystemHelper()  = default;
public:


// Fields

// Static field s_displaySubsystems

// Static field s_displaySubsystemDescriptors

// Static field s_inputSubsystems


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::XRSubsystemHelper, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::XRSubsystemHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::XRSubsystemHelper*, "", "XRSubsystemHelper");
