#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__Installer_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DefaultGameObjectParentInstaller)
namespace System {
class Object;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class __DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer;
}
namespace System {
class IDisposable;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Zenject {
class DefaultGameObjectParentInstaller;
}
namespace Zenject {
class __DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::DefaultGameObjectParentInstaller);
MARK_REF_PTR_T(::Zenject::__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer);
// Type: ::DefaultParentObjectDestroyer
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11347))
// CS Name: ::DefaultGameObjectParentInstaller::DefaultParentObjectDestroyer*
class CORDL_TYPE __DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field _gameObject offset 0x10
 __declspec(property(get=__get__gameObject, put=__set__gameObject)) ::UnityEngine::GameObject*  _gameObject;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set__gameObject(::UnityEngine::GameObject*  value) ;

constexpr ::UnityEngine::GameObject* __get__gameObject() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> __get__gameObject() const;

static inline ::Zenject::__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer* New_ctor(::UnityEngine::GameObject*  gameObject) ;

/// @brief Method .ctor addr 0x2f1d524 size 0x28 virtual false final false
inline void _ctor(::UnityEngine::GameObject*  gameObject) ;

/// @brief Method Dispose addr 0x2f1d54c size 0x5c virtual true final true
inline void Dispose() ;

/// @brief Method __zenCreate addr 0x2f1d5a8 size 0xac virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2f1d654 size 0x274 virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer(__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer(__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer, 0x18>, "Size mismatch!");

} // namespace end def Zenject
// Type: Zenject::DefaultGameObjectParentInstaller
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11132)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11132), inst: 3908 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11348))
// CS Name: ::Zenject::DefaultGameObjectParentInstaller*
class CORDL_TYPE DefaultGameObjectParentInstaller : public ::Zenject::Installer_2<::StringW,::Zenject::DefaultGameObjectParentInstaller*> {
public:
// Declarations
using DefaultParentObjectDestroyer = ::Zenject::__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::Zenject::Installer_2<::StringW,::Zenject::DefaultGameObjectParentInstaller*>)]{};

/// @brief Field _name offset 0x18
 __declspec(property(get=__get__name, put=__set__name)) ::StringW  _name;

constexpr void __set__name(::StringW  value) ;

constexpr ::StringW& __get__name() ;

constexpr ::StringW const& __get__name() const;

static inline ::Zenject::DefaultGameObjectParentInstaller* New_ctor(::StringW  name) ;

/// @brief Method .ctor addr 0x2f1d064 size 0x5c virtual false final false
inline void _ctor(::StringW  name) ;

/// @brief Method InstallBindings addr 0x2f1d0c0 size 0x148 virtual true final false
inline void InstallBindings() ;

/// @brief Method __zenCreate addr 0x2f1d208 size 0xa8 virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2f1d2b0 size 0x274 virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "DefaultGameObjectParentInstaller", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DefaultGameObjectParentInstaller(DefaultGameObjectParentInstaller && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DefaultGameObjectParentInstaller", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DefaultGameObjectParentInstaller(DefaultGameObjectParentInstaller const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DefaultGameObjectParentInstaller()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::DefaultGameObjectParentInstaller, 0x20>, "Size mismatch!");

} // namespace end def Zenject
NEED_NO_BOX(::Zenject::DefaultGameObjectParentInstaller);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::DefaultGameObjectParentInstaller*, "Zenject", "DefaultGameObjectParentInstaller");
NEED_NO_BOX(::Zenject::__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer*, "Zenject", "DefaultGameObjectParentInstaller/DefaultParentObjectDestroyer");
