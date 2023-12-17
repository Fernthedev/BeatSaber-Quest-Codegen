#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SceneInfo)
// Forward declare root types
namespace GlobalNamespace {
class SceneInfo;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SceneInfo);
// Type: ::SceneInfo
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15407))
// CS Name: ::SceneInfo*
class CORDL_TYPE SceneInfo : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::GlobalNamespace::PersistentScriptableObject)]{};

/// @brief Field _sceneName offset 0x18
 __declspec(property(get=__get__sceneName, put=__set__sceneName)) ::StringW  _sceneName;

/// @brief Field _disabledRootObjects offset 0x20
 __declspec(property(get=__get__disabledRootObjects, put=__set__disabledRootObjects)) bool  _disabledRootObjects;

 __declspec(property(get=get_sceneName)) ::StringW  sceneName;

 __declspec(property(get=get_disabledRootObjects)) bool  disabledRootObjects;

constexpr void __set__sceneName(::StringW  value) ;

constexpr ::StringW& __get__sceneName() ;

constexpr ::StringW const& __get__sceneName() const;

constexpr void __set__disabledRootObjects(bool  value) ;

constexpr bool& __get__disabledRootObjects() ;

constexpr bool const& __get__disabledRootObjects() const;

/// @brief Method get_sceneName addr 0xe23400 size 0x8 virtual false final false
inline ::StringW get_sceneName() ;

/// @brief Method get_disabledRootObjects addr 0xe23408 size 0x8 virtual false final false
inline bool get_disabledRootObjects() ;

/// @brief Method SetSceneName addr 0xe23410 size 0x8 virtual false final false
inline void SetSceneName(::StringW  newSceneName) ;

static inline ::GlobalNamespace::SceneInfo* New_ctor() ;

/// @brief Method .ctor addr 0xe23418 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SceneInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SceneInfo(SceneInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SceneInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SceneInfo(SceneInfo const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SceneInfo()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SceneInfo, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SceneInfo);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SceneInfo*, "", "SceneInfo");
