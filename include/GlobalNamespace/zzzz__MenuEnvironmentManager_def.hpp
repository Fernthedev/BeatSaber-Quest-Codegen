#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MenuEnvironmentManager)
namespace GlobalNamespace {
class __MenuEnvironmentManager__MenuEnvironmentObjects;
}
namespace GlobalNamespace {
struct __MenuEnvironmentManager__MenuEnvironmentType;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
struct __MenuEnvironmentManager__MenuEnvironmentType;
}
namespace GlobalNamespace {
class MenuEnvironmentManager;
}
namespace GlobalNamespace {
class __MenuEnvironmentManager__MenuEnvironmentObjects;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType);
MARK_REF_PTR_T(::GlobalNamespace::MenuEnvironmentManager);
MARK_REF_PTR_T(::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects);
// Type: ::MenuEnvironmentType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4690))
// CS Name: ::MenuEnvironmentManager::MenuEnvironmentType
struct CORDL_TYPE __MenuEnvironmentManager__MenuEnvironmentType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____MenuEnvironmentManager__MenuEnvironmentType_Unwrapped
enum struct ____MenuEnvironmentManager__MenuEnvironmentType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Default = static_cast<int32_t>(0x1),
__E_Lobby = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType const None;

/// @brief Field Default value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType const Default;

/// @brief Field Lobby value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType const Lobby;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____MenuEnvironmentManager__MenuEnvironmentType_Unwrapped () const noexcept {
return std::bit_cast<____MenuEnvironmentManager__MenuEnvironmentType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __MenuEnvironmentManager__MenuEnvironmentType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __MenuEnvironmentManager__MenuEnvironmentType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __MenuEnvironmentManager__MenuEnvironmentType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::MenuEnvironmentObjects
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4691))
// CS Name: ::MenuEnvironmentManager::MenuEnvironmentObjects*
class CORDL_TYPE __MenuEnvironmentManager__MenuEnvironmentObjects : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _menuEnvironmentType offset 0x10
 __declspec(property(get=__get__menuEnvironmentType, put=__set__menuEnvironmentType)) ::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType  _menuEnvironmentType;

/// @brief Field _wrapper offset 0x18
 __declspec(property(get=__get__wrapper, put=__set__wrapper)) ::UnityEngine::GameObject*  _wrapper;

 __declspec(property(get=get_menuEnvironmentType)) ::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType  menuEnvironmentType;

 __declspec(property(get=get_wrapper)) ::UnityEngine::GameObject*  wrapper;

constexpr void __set__menuEnvironmentType(::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType  value) ;

constexpr ::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType& __get__menuEnvironmentType() ;

constexpr ::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType const& __get__menuEnvironmentType() const;

constexpr void __set__wrapper(::UnityEngine::GameObject*  value) ;

constexpr ::UnityEngine::GameObject* __get__wrapper() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> __get__wrapper() const;

/// @brief Method get_menuEnvironmentType addr 0x23765cc size 0x8 virtual false final false
inline ::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType get_menuEnvironmentType() ;

/// @brief Method get_wrapper addr 0x23765d4 size 0x8 virtual false final false
inline ::UnityEngine::GameObject* get_wrapper() ;

static inline ::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects* New_ctor() ;

/// @brief Method .ctor addr 0x23765dc size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__MenuEnvironmentManager__MenuEnvironmentObjects", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__MenuEnvironmentManager__MenuEnvironmentObjects(__MenuEnvironmentManager__MenuEnvironmentObjects && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__MenuEnvironmentManager__MenuEnvironmentObjects", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__MenuEnvironmentManager__MenuEnvironmentObjects(__MenuEnvironmentManager__MenuEnvironmentObjects const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __MenuEnvironmentManager__MenuEnvironmentObjects()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::MenuEnvironmentManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4692))
// CS Name: ::MenuEnvironmentManager*
class CORDL_TYPE MenuEnvironmentManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using MenuEnvironmentObjects = ::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects;

using MenuEnvironmentType = ::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _data offset 0x18
 __declspec(property(get=__get__data, put=__set__data)) ::ArrayW<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects*,::Array<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects*>*>  _data;

/// @brief Field _prevMenuEnvironmentType offset 0x20
 __declspec(property(get=__get__prevMenuEnvironmentType, put=__set__prevMenuEnvironmentType)) ::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType  _prevMenuEnvironmentType;

constexpr void __set__data(::ArrayW<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects*,::Array<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects*,::Array<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects*>*>& __get__data() ;

constexpr ::ArrayW<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects*,::Array<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects*>*> const& __get__data() const;

constexpr void __set__prevMenuEnvironmentType(::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType  value) ;

constexpr ::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType& __get__prevMenuEnvironmentType() ;

constexpr ::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType const& __get__prevMenuEnvironmentType() const;

/// @brief Method Start addr 0x237643c size 0x8 virtual false final false
inline void Start() ;

/// @brief Method ShowEnvironmentType addr 0x2376444 size 0x180 virtual false final false
inline void ShowEnvironmentType(::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType  menuEnvironmentType) ;

static inline ::GlobalNamespace::MenuEnvironmentManager* New_ctor() ;

/// @brief Method .ctor addr 0x23765c4 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MenuEnvironmentManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MenuEnvironmentManager(MenuEnvironmentManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MenuEnvironmentManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MenuEnvironmentManager(MenuEnvironmentManager const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MenuEnvironmentManager()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuEnvironmentManager, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType, "", "MenuEnvironmentManager/MenuEnvironmentType");
NEED_NO_BOX(::GlobalNamespace::MenuEnvironmentManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuEnvironmentManager*, "", "MenuEnvironmentManager");
NEED_NO_BOX(::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects*, "", "MenuEnvironmentManager/MenuEnvironmentObjects");
