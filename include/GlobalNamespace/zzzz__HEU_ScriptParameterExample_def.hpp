#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HEU_ScriptParameterExample)
namespace HoudiniEngineUnity {
class HEU_HoudiniAsset;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class HEU_ScriptParameterExample;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::HEU_ScriptParameterExample);
// Type: ::HEU_ScriptParameterExample
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9592))
// CS Name: ::HEU_ScriptParameterExample*
class CORDL_TYPE HEU_ScriptParameterExample : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _evergreenGameObject offset 0x18
 __declspec(property(get=__get__evergreenGameObject, put=__set__evergreenGameObject)) ::UnityEngine::GameObject*  _evergreenGameObject;

/// @brief Field _evergreenAsset offset 0x20
 __declspec(property(get=__get__evergreenAsset, put=__set__evergreenAsset)) ::HoudiniEngineUnity::HEU_HoudiniAsset*  _evergreenAsset;

/// @brief Field _updateRate offset 0x28
 __declspec(property(get=__get__updateRate, put=__set__updateRate)) float_t  _updateRate;

/// @brief Field _scale offset 0x2c
 __declspec(property(get=__get__scale, put=__set__scale)) float_t  _scale;

constexpr void __set__evergreenGameObject(::UnityEngine::GameObject*  value) ;

constexpr ::UnityEngine::GameObject* __get__evergreenGameObject() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> __get__evergreenGameObject() const;

constexpr void __set__evergreenAsset(::HoudiniEngineUnity::HEU_HoudiniAsset*  value) ;

constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset* __get__evergreenAsset() ;

constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_HoudiniAsset*> __get__evergreenAsset() const;

constexpr void __set__updateRate(float_t  value) ;

constexpr float_t& __get__updateRate() ;

constexpr float_t const& __get__updateRate() const;

constexpr void __set__scale(float_t  value) ;

constexpr float_t& __get__scale() ;

constexpr float_t const& __get__scale() const;

/// @brief Method Start addr 0x214d9c0 size 0x288 virtual false final false
inline void Start() ;

/// @brief Method UpdateGravity addr 0x214dc48 size 0xe4 virtual false final false
inline void UpdateGravity() ;

static inline ::GlobalNamespace::HEU_ScriptParameterExample* New_ctor() ;

/// @brief Method .ctor addr 0x214dd2c size 0x14 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "HEU_ScriptParameterExample", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HEU_ScriptParameterExample(HEU_ScriptParameterExample && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HEU_ScriptParameterExample", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HEU_ScriptParameterExample(HEU_ScriptParameterExample const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HEU_ScriptParameterExample()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HEU_ScriptParameterExample, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HEU_ScriptParameterExample);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HEU_ScriptParameterExample*, "", "HEU_ScriptParameterExample");
