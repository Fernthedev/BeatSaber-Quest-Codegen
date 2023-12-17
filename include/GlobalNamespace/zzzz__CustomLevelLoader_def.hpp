#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(CustomLevelLoader)
namespace GlobalNamespace {
class EnvironmentsListSO;
}
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class CustomLevelLoader;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CustomLevelLoader);
// Type: ::CustomLevelLoader
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4145))
// CS Name: ::CustomLevelLoader*
class CORDL_TYPE CustomLevelLoader : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _defaultEnvironmentInfo offset 0x18
 __declspec(property(get=__get__defaultEnvironmentInfo, put=__set__defaultEnvironmentInfo)) ::GlobalNamespace::EnvironmentInfoSO*  _defaultEnvironmentInfo;

/// @brief Field _defaultAllDirectionsEnvironmentInfo offset 0x20
 __declspec(property(get=__get__defaultAllDirectionsEnvironmentInfo, put=__set__defaultAllDirectionsEnvironmentInfo)) ::GlobalNamespace::EnvironmentInfoSO*  _defaultAllDirectionsEnvironmentInfo;

/// @brief Field _environmentSceneInfoCollection offset 0x28
 __declspec(property(get=__get__environmentSceneInfoCollection, put=__set__environmentSceneInfoCollection)) ::GlobalNamespace::EnvironmentsListSO*  _environmentSceneInfoCollection;

/// @brief Field _defaultPackCover offset 0x30
 __declspec(property(get=__get__defaultPackCover, put=__set__defaultPackCover)) ::UnityEngine::Sprite*  _defaultPackCover;

/// @brief Field _smallDefaultPackCover offset 0x38
 __declspec(property(get=__get__smallDefaultPackCover, put=__set__smallDefaultPackCover)) ::UnityEngine::Sprite*  _smallDefaultPackCover;

constexpr void __set__defaultEnvironmentInfo(::GlobalNamespace::EnvironmentInfoSO*  value) ;

constexpr ::GlobalNamespace::EnvironmentInfoSO* __get__defaultEnvironmentInfo() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentInfoSO*> __get__defaultEnvironmentInfo() const;

constexpr void __set__defaultAllDirectionsEnvironmentInfo(::GlobalNamespace::EnvironmentInfoSO*  value) ;

constexpr ::GlobalNamespace::EnvironmentInfoSO* __get__defaultAllDirectionsEnvironmentInfo() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentInfoSO*> __get__defaultAllDirectionsEnvironmentInfo() const;

constexpr void __set__environmentSceneInfoCollection(::GlobalNamespace::EnvironmentsListSO*  value) ;

constexpr ::GlobalNamespace::EnvironmentsListSO* __get__environmentSceneInfoCollection() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentsListSO*> __get__environmentSceneInfoCollection() const;

constexpr void __set__defaultPackCover(::UnityEngine::Sprite*  value) ;

constexpr ::UnityEngine::Sprite* __get__defaultPackCover() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> __get__defaultPackCover() const;

constexpr void __set__smallDefaultPackCover(::UnityEngine::Sprite*  value) ;

constexpr ::UnityEngine::Sprite* __get__smallDefaultPackCover() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> __get__smallDefaultPackCover() const;

static inline ::GlobalNamespace::CustomLevelLoader* New_ctor() ;

/// @brief Method .ctor addr 0x223c610 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "CustomLevelLoader", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomLevelLoader(CustomLevelLoader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomLevelLoader", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomLevelLoader(CustomLevelLoader const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CustomLevelLoader()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CustomLevelLoader, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CustomLevelLoader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CustomLevelLoader*, "", "CustomLevelLoader");
