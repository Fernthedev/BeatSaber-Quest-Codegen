#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__ScriptableObjectInstallerBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ScriptableObjectInstaller_4)
namespace System {
class Object;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TDerived>
class ScriptableObjectInstaller_4;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3,::il2cpp_utils::il2cpp_reference_type TDerived>
class ScriptableObjectInstaller_4<TParam1,TParam2,TParam3,TDerived>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::ScriptableObjectInstaller_4);
// Type: Zenject::ScriptableObjectInstaller`4
// Type: Zenject::ScriptableObjectInstaller`4
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3,::il2cpp_utils::il2cpp_reference_type TDerived>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11151)), TypeDefinitionIndex(TypeDefinitionIndex(11154))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11151), inst: 6124 })
// CS Name: ::Zenject::ScriptableObjectInstaller`4<TParam1,TParam2,TParam3,TDerived>*
class CORDL_TYPE ScriptableObjectInstaller_4<TParam1,TParam2,TParam3,TDerived> : public ::Zenject::ScriptableObjectInstallerBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::Zenject::ScriptableObjectInstallerBase)]{};

/// @brief Method InstallFromResource addr 0x0 size 0xffffffffffffffff virtual false final false
static inline TDerived InstallFromResource(::Zenject::DiContainer*  container, TParam1  p1, TParam2  p2, TParam3  p3) ;

/// @brief Method InstallFromResource addr 0x0 size 0xffffffffffffffff virtual false final false
static inline TDerived InstallFromResource(::StringW  resourcePath, ::Zenject::DiContainer*  container, TParam1  p1, TParam2  p2, TParam3  p3) ;

static inline ::Zenject::ScriptableObjectInstaller_4<TParam1,TParam2,TParam3,TDerived>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "ScriptableObjectInstaller_4", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ScriptableObjectInstaller_4(ScriptableObjectInstaller_4 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScriptableObjectInstaller_4", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScriptableObjectInstaller_4(ScriptableObjectInstaller_4 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ScriptableObjectInstaller_4()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::ScriptableObjectInstaller_4, "Zenject", "ScriptableObjectInstaller`4");
