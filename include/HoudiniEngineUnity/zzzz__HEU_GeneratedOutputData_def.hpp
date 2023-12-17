#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(HEU_GeneratedOutputData)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Collider;
}
namespace HoudiniEngineUnity {
template<typename T>
class IEquivable_1;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_GeneratedOutputData;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_GeneratedOutputData);
// Type: HoudiniEngineUnity::HEU_GeneratedOutputData
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9628))
// CS Name: ::HoudiniEngineUnity::HEU_GeneratedOutputData*
class CORDL_TYPE HEU_GeneratedOutputData : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field _gameObject offset 0x10
 __declspec(property(get=__get__gameObject, put=__set__gameObject)) ::UnityEngine::GameObject*  _gameObject;

/// @brief Field _renderMaterials offset 0x18
 __declspec(property(get=__get__renderMaterials, put=__set__renderMaterials)) ::ArrayW<::UnityEngine::Material*,::Array<::UnityEngine::Material*>*>  _renderMaterials;

/// @brief Field _colliders offset 0x20
 __declspec(property(get=__get__colliders, put=__set__colliders)) ::System::Collections::Generic::List_1<::UnityEngine::Collider*>*  _colliders;

/// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_GeneratedOutputData*>"
constexpr operator  ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_GeneratedOutputData*>*() noexcept;

constexpr void __set__gameObject(::UnityEngine::GameObject*  value) ;

constexpr ::UnityEngine::GameObject* __get__gameObject() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> __get__gameObject() const;

constexpr void __set__renderMaterials(::ArrayW<::UnityEngine::Material*,::Array<::UnityEngine::Material*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::Material*,::Array<::UnityEngine::Material*>*>& __get__renderMaterials() ;

constexpr ::ArrayW<::UnityEngine::Material*,::Array<::UnityEngine::Material*>*> const& __get__renderMaterials() const;

constexpr void __set__colliders(::System::Collections::Generic::List_1<::UnityEngine::Collider*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Collider*>* __get__colliders() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Collider*>*> __get__colliders() const;

/// @brief Method IsEquivalentTo addr 0x2157164 size 0x1ec virtual true final true
inline bool IsEquivalentTo(::HoudiniEngineUnity::HEU_GeneratedOutputData*  other) ;

static inline ::HoudiniEngineUnity::HEU_GeneratedOutputData* New_ctor() ;

/// @brief Method .ctor addr 0x21570e8 size 0x7c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "HEU_GeneratedOutputData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HEU_GeneratedOutputData(HEU_GeneratedOutputData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HEU_GeneratedOutputData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HEU_GeneratedOutputData(HEU_GeneratedOutputData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HEU_GeneratedOutputData()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_GeneratedOutputData, 0x28>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_GeneratedOutputData);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_GeneratedOutputData*, "HoudiniEngineUnity", "HEU_GeneratedOutputData");
