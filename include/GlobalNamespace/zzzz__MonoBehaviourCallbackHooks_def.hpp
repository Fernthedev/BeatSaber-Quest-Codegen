#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/ResourceManagement/Util/zzzz__ComponentSingleton_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MonoBehaviourCallbackHooks)
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class MonoBehaviourCallbackHooks;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MonoBehaviourCallbackHooks);
// Type: ::MonoBehaviourCallbackHooks
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13966)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13966), inst: 1062 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13948))
// CS Name: ::MonoBehaviourCallbackHooks*
class CORDL_TYPE MonoBehaviourCallbackHooks : public ::UnityEngine::ResourceManagement::Util::ComponentSingleton_1<::GlobalNamespace::MonoBehaviourCallbackHooks*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::ResourceManagement::Util::ComponentSingleton_1<::GlobalNamespace::MonoBehaviourCallbackHooks*>)]{};

/// @brief Field m_OnUpdateDelegate offset 0x18
 __declspec(property(get=__get_m_OnUpdateDelegate, put=__set_m_OnUpdateDelegate)) ::System::Action_1<float_t>*  m_OnUpdateDelegate;

constexpr void __set_m_OnUpdateDelegate(::System::Action_1<float_t>*  value) ;

constexpr ::System::Action_1<float_t>* __get_m_OnUpdateDelegate() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<float_t>*> __get_m_OnUpdateDelegate() const;

/// @brief Method add_OnUpdateDelegate addr 0x2bc994c size 0xa8 virtual false final false
inline void add_OnUpdateDelegate(::System::Action_1<float_t>*  value) ;

/// @brief Method remove_OnUpdateDelegate addr 0x2bc99f4 size 0xa8 virtual false final false
inline void remove_OnUpdateDelegate(::System::Action_1<float_t>*  value) ;

/// @brief Method GetGameObjectName addr 0x2bc9a9c size 0x40 virtual true final false
inline ::StringW GetGameObjectName() ;

/// @brief Method Update addr 0x2bc9adc size 0x30 virtual false final false
inline void Update() ;

static inline ::GlobalNamespace::MonoBehaviourCallbackHooks* New_ctor() ;

/// @brief Method .ctor addr 0x2bc9b0c size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MonoBehaviourCallbackHooks", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoBehaviourCallbackHooks(MonoBehaviourCallbackHooks && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoBehaviourCallbackHooks", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoBehaviourCallbackHooks(MonoBehaviourCallbackHooks const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MonoBehaviourCallbackHooks()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MonoBehaviourCallbackHooks, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MonoBehaviourCallbackHooks);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MonoBehaviourCallbackHooks*, "", "MonoBehaviourCallbackHooks");
