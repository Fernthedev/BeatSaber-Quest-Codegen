#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__Installer_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(ActionInstaller)
namespace System {
class Object;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class DiContainer;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace Zenject {
class ActionInstaller;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::ActionInstaller);
// Type: Zenject::ActionInstaller
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11131)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11131), inst: 3902 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11346))
// CS Name: ::Zenject::ActionInstaller*
class CORDL_TYPE ActionInstaller : public ::Zenject::Installer_1<::Zenject::ActionInstaller*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::Zenject::Installer_1<::Zenject::ActionInstaller*>)]{};

/// @brief Field _installMethod offset 0x18
 __declspec(property(get=__get__installMethod, put=__set__installMethod)) ::System::Action_1<::Zenject::DiContainer*>*  _installMethod;

constexpr void __set__installMethod(::System::Action_1<::Zenject::DiContainer*>*  value) ;

constexpr ::System::Action_1<::Zenject::DiContainer*>* __get__installMethod() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> __get__installMethod() const;

static inline ::Zenject::ActionInstaller* New_ctor(::System::Action_1<::Zenject::DiContainer*>*  installMethod) ;

/// @brief Method .ctor addr 0x2f0bb0c size 0x5c virtual false final false
inline void _ctor(::System::Action_1<::Zenject::DiContainer*>*  installMethod) ;

/// @brief Method InstallBindings addr 0x2f1cd14 size 0x28 virtual true final false
inline void InstallBindings() ;

/// @brief Method __zenCreate addr 0x2f1cd3c size 0xb4 virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2f1cdf0 size 0x274 virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "ActionInstaller", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ActionInstaller(ActionInstaller && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ActionInstaller", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ActionInstaller(ActionInstaller const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ActionInstaller()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::ActionInstaller, 0x20>, "Size mismatch!");

} // namespace end def Zenject
NEED_NO_BOX(::Zenject::ActionInstaller);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ActionInstaller*, "Zenject", "ActionInstaller");
