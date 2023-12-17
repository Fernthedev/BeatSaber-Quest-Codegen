#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_ObjectInstanceInfo)
namespace HoudiniEngineUnity {
class HEU_PartData;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
namespace HoudiniEngineUnity {
template<typename T>
class IEquivable_1;
}
namespace HoudiniEngineUnity {
class HEU_InstancedInput;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_ObjectInstanceInfo;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_ObjectInstanceInfo);
// Type: HoudiniEngineUnity::HEU_ObjectInstanceInfo
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10210))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9652))
// CS Name: ::HoudiniEngineUnity::HEU_ObjectInstanceInfo*
class CORDL_TYPE HEU_ObjectInstanceInfo : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::UnityEngine::ScriptableObject)]{};

/// @brief Field _instancedInputs offset 0x18
 __declspec(property(get=__get__instancedInputs, put=__set__instancedInputs)) ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InstancedInput*>*  _instancedInputs;

/// @brief Field _partTarget offset 0x20
 __declspec(property(get=__get__partTarget, put=__set__partTarget)) ::HoudiniEngineUnity::HEU_PartData*  _partTarget;

/// @brief Field _instancedObjectNodeID offset 0x28
 __declspec(property(get=__get__instancedObjectNodeID, put=__set__instancedObjectNodeID)) int32_t  _instancedObjectNodeID;

/// @brief Field _instancedObjectPath offset 0x30
 __declspec(property(get=__get__instancedObjectPath, put=__set__instancedObjectPath)) ::StringW  _instancedObjectPath;

/// @brief Field _instances offset 0x38
 __declspec(property(get=__get__instances, put=__set__instances)) ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*  _instances;

/// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_ObjectInstanceInfo*>"
constexpr operator  ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_ObjectInstanceInfo*>*() noexcept;

constexpr void __set__instancedInputs(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InstancedInput*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InstancedInput*>* __get__instancedInputs() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InstancedInput*>*> __get__instancedInputs() const;

constexpr void __set__partTarget(::HoudiniEngineUnity::HEU_PartData*  value) ;

constexpr ::HoudiniEngineUnity::HEU_PartData* __get__partTarget() ;

constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_PartData*> __get__partTarget() const;

constexpr void __set__instancedObjectNodeID(int32_t  value) ;

constexpr int32_t& __get__instancedObjectNodeID() ;

constexpr int32_t const& __get__instancedObjectNodeID() const;

constexpr void __set__instancedObjectPath(::StringW  value) ;

constexpr ::StringW& __get__instancedObjectPath() ;

constexpr ::StringW const& __get__instancedObjectPath() const;

constexpr void __set__instances(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* __get__instances() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*> __get__instances() const;

/// @brief Method IsEquivalentTo addr 0x217268c size 0x148 virtual true final true
inline bool IsEquivalentTo(::HoudiniEngineUnity::HEU_ObjectInstanceInfo*  other) ;

static inline ::HoudiniEngineUnity::HEU_ObjectInstanceInfo* New_ctor() ;

/// @brief Method .ctor addr 0x21727d4 size 0xc8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "HEU_ObjectInstanceInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HEU_ObjectInstanceInfo(HEU_ObjectInstanceInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HEU_ObjectInstanceInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HEU_ObjectInstanceInfo(HEU_ObjectInstanceInfo const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HEU_ObjectInstanceInfo()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_ObjectInstanceInfo, 0x40>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_ObjectInstanceInfo);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_ObjectInstanceInfo*, "HoudiniEngineUnity", "HEU_ObjectInstanceInfo");
