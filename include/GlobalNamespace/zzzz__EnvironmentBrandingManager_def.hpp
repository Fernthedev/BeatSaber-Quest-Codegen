#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(EnvironmentBrandingManager)
namespace GlobalNamespace {
class __EnvironmentBrandingManager__InitData;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class EnvironmentBrandingManager;
}
namespace GlobalNamespace {
class __EnvironmentBrandingManager__InitData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EnvironmentBrandingManager);
MARK_REF_PTR_T(::GlobalNamespace::__EnvironmentBrandingManager__InitData);
// Type: ::InitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4688))
// CS Name: ::EnvironmentBrandingManager::InitData*
class CORDL_TYPE __EnvironmentBrandingManager__InitData : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field hideBranding offset 0x10
 __declspec(property(get=__get_hideBranding, put=__set_hideBranding)) bool  hideBranding;

constexpr void __set_hideBranding(bool  value) ;

constexpr bool& __get_hideBranding() ;

constexpr bool const& __get_hideBranding() const;

static inline ::GlobalNamespace::__EnvironmentBrandingManager__InitData* New_ctor(bool  hideBranding) ;

/// @brief Method .ctor addr 0x2376414 size 0x28 virtual false final false
inline void _ctor(bool  hideBranding) ;

// Ctor Parameters [CppParam { name: "", ty: "__EnvironmentBrandingManager__InitData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__EnvironmentBrandingManager__InitData(__EnvironmentBrandingManager__InitData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__EnvironmentBrandingManager__InitData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__EnvironmentBrandingManager__InitData(__EnvironmentBrandingManager__InitData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __EnvironmentBrandingManager__InitData()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__EnvironmentBrandingManager__InitData, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::EnvironmentBrandingManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4689))
// CS Name: ::EnvironmentBrandingManager*
class CORDL_TYPE EnvironmentBrandingManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using InitData = ::GlobalNamespace::__EnvironmentBrandingManager__InitData;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _brandingObjects offset 0x18
 __declspec(property(get=__get__brandingObjects, put=__set__brandingObjects)) ::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>  _brandingObjects;

/// @brief Field _replacementBrandingObjects offset 0x20
 __declspec(property(get=__get__replacementBrandingObjects, put=__set__replacementBrandingObjects)) ::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>  _replacementBrandingObjects;

/// @brief Field _initData offset 0x28
 __declspec(property(get=__get__initData, put=__set__initData)) ::GlobalNamespace::__EnvironmentBrandingManager__InitData*  _initData;

constexpr void __set__brandingObjects(::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>& __get__brandingObjects() ;

constexpr ::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*> const& __get__brandingObjects() const;

constexpr void __set__replacementBrandingObjects(::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>& __get__replacementBrandingObjects() ;

constexpr ::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*> const& __get__replacementBrandingObjects() const;

constexpr void __set__initData(::GlobalNamespace::__EnvironmentBrandingManager__InitData*  value) ;

constexpr ::GlobalNamespace::__EnvironmentBrandingManager__InitData* __get__initData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__EnvironmentBrandingManager__InitData*> __get__initData() const;

/// @brief Method Start addr 0x2376340 size 0xcc virtual false final false
inline void Start() ;

static inline ::GlobalNamespace::EnvironmentBrandingManager* New_ctor() ;

/// @brief Method .ctor addr 0x237640c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentBrandingManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnvironmentBrandingManager(EnvironmentBrandingManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentBrandingManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnvironmentBrandingManager(EnvironmentBrandingManager const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EnvironmentBrandingManager()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnvironmentBrandingManager, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EnvironmentBrandingManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentBrandingManager*, "", "EnvironmentBrandingManager");
NEED_NO_BOX(::GlobalNamespace::__EnvironmentBrandingManager__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__EnvironmentBrandingManager__InitData*, "", "EnvironmentBrandingManager/InitData");
