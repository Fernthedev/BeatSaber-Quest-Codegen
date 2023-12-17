#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SubsystemWithProvider)
namespace UnityEngine {
class ISubsystem;
}
namespace UnityEngine::SubsystemsImplementation {
class SubsystemProvider;
}
// Forward declare root types
namespace UnityEngine::SubsystemsImplementation {
class SubsystemWithProvider;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::SubsystemsImplementation::SubsystemWithProvider);
// Type: UnityEngine.SubsystemsImplementation::SubsystemWithProvider
namespace UnityEngine::SubsystemsImplementation {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15973))
// CS Name: ::UnityEngine.SubsystemsImplementation::SubsystemWithProvider*
class CORDL_TYPE SubsystemWithProvider : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field <running>k__BackingField offset 0x10
 __declspec(property(get=__get__running_k__BackingField, put=__set__running_k__BackingField)) bool  _running_k__BackingField;

/// @brief Field <providerBase>k__BackingField offset 0x18
 __declspec(property(get=__get__providerBase_k__BackingField, put=__set__providerBase_k__BackingField)) ::UnityEngine::SubsystemsImplementation::SubsystemProvider*  _providerBase_k__BackingField;

 __declspec(property(get=get_running, put=set_running)) bool  running;

 __declspec(property(get=get_providerBase)) ::UnityEngine::SubsystemsImplementation::SubsystemProvider*  providerBase;

/// @brief Convert operator to "::UnityEngine::ISubsystem"
constexpr operator  ::UnityEngine::ISubsystem*() noexcept;

constexpr void __set__running_k__BackingField(bool  value) ;

constexpr bool& __get__running_k__BackingField() ;

constexpr bool const& __get__running_k__BackingField() const;

constexpr void __set__providerBase_k__BackingField(::UnityEngine::SubsystemsImplementation::SubsystemProvider*  value) ;

constexpr ::UnityEngine::SubsystemsImplementation::SubsystemProvider* __get__providerBase_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::SubsystemsImplementation::SubsystemProvider*> __get__providerBase_k__BackingField() const;

/// @brief Method Start addr 0x2d1b4b4 size 0x3c virtual true final true
inline void Start() ;

/// @brief Method OnStart addr 0x0 size 0xffffffffffffffff virtual true final false
inline void OnStart() ;

/// @brief Method Stop addr 0x2d1b4f0 size 0x38 virtual true final true
inline void Stop() ;

/// @brief Method OnStop addr 0x0 size 0xffffffffffffffff virtual true final false
inline void OnStop() ;

/// @brief Method Destroy addr 0x2d1b528 size 0x7c virtual true final true
inline void Destroy() ;

/// @brief Method OnDestroy addr 0x0 size 0xffffffffffffffff virtual true final false
inline void OnDestroy() ;

/// @brief Method get_running addr 0x2d1b5a4 size 0x8 virtual true final true
inline bool get_running() ;

/// @brief Method set_running addr 0x2d1b5ac size 0xc virtual false final false
inline void set_running(bool  value) ;

/// @brief Method get_providerBase addr 0x2d1b5b8 size 0x8 virtual false final false
inline ::UnityEngine::SubsystemsImplementation::SubsystemProvider* get_providerBase() ;

static inline ::UnityEngine::SubsystemsImplementation::SubsystemWithProvider* New_ctor() ;

/// @brief Method .ctor addr 0x2d1b5c0 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SubsystemWithProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SubsystemWithProvider(SubsystemWithProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SubsystemWithProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SubsystemWithProvider(SubsystemWithProvider const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SubsystemWithProvider()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SubsystemsImplementation::SubsystemWithProvider, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::SubsystemsImplementation
NEED_NO_BOX(::UnityEngine::SubsystemsImplementation::SubsystemWithProvider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SubsystemsImplementation::SubsystemWithProvider*, "UnityEngine.SubsystemsImplementation", "SubsystemWithProvider");
