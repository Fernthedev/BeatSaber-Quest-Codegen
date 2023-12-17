#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(HEU_InstancedInput)
namespace HoudiniEngineUnity {
template<typename T>
class IEquivable_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_InstancedInput;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_InstancedInput);
// Type: HoudiniEngineUnity::HEU_InstancedInput
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9653))
// CS Name: ::HoudiniEngineUnity::HEU_InstancedInput*
class CORDL_TYPE HEU_InstancedInput : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field _instancedGameObject offset 0x10
 __declspec(property(get=__get__instancedGameObject, put=__set__instancedGameObject)) ::UnityEngine::GameObject*  _instancedGameObject;

/// @brief Field _rotationOffset offset 0x18
 __declspec(property(get=__get__rotationOffset, put=__set__rotationOffset)) ::UnityEngine::Vector3  _rotationOffset;

/// @brief Field _scaleOffset offset 0x24
 __declspec(property(get=__get__scaleOffset, put=__set__scaleOffset)) ::UnityEngine::Vector3  _scaleOffset;

/// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_InstancedInput*>"
constexpr operator  ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_InstancedInput*>*() noexcept;

constexpr void __set__instancedGameObject(::UnityEngine::GameObject*  value) ;

constexpr ::UnityEngine::GameObject* __get__instancedGameObject() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> __get__instancedGameObject() const;

constexpr void __set__rotationOffset(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__rotationOffset() ;

constexpr ::UnityEngine::Vector3 const& __get__rotationOffset() const;

constexpr void __set__scaleOffset(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__scaleOffset() ;

constexpr ::UnityEngine::Vector3 const& __get__scaleOffset() const;

/// @brief Method IsEquivalentTo addr 0x217289c size 0x1a0 virtual true final true
inline bool IsEquivalentTo(::HoudiniEngineUnity::HEU_InstancedInput*  other) ;

static inline ::HoudiniEngineUnity::HEU_InstancedInput* New_ctor() ;

/// @brief Method .ctor addr 0x2172a3c size 0x94 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "HEU_InstancedInput", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HEU_InstancedInput(HEU_InstancedInput && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HEU_InstancedInput", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HEU_InstancedInput(HEU_InstancedInput const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HEU_InstancedInput()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_InstancedInput, 0x30>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_InstancedInput);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_InstancedInput*, "HoudiniEngineUnity", "HEU_InstancedInput");
