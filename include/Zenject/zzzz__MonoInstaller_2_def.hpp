#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstallerBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MonoInstaller_2)
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TDerived>
class MonoInstaller_2;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TDerived>
class MonoInstaller_2<TParam1,TDerived>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::MonoInstaller_2);
// Type: Zenject::MonoInstaller`2
// Type: Zenject::MonoInstaller`2
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TDerived>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11140)), TypeDefinitionIndex(TypeDefinitionIndex(11146))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11140), inst: 81 })
// CS Name: ::Zenject::MonoInstaller`2<TParam1,TDerived>*
class CORDL_TYPE MonoInstaller_2<TParam1,TDerived> : public ::Zenject::MonoInstallerBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::Zenject::MonoInstallerBase)]{};

/// @brief Method InstallFromResource addr 0x0 size 0xffffffffffffffff virtual false final false
static inline TDerived InstallFromResource(::Zenject::DiContainer*  container, TParam1  p1) ;

/// @brief Method InstallFromResource addr 0x0 size 0xffffffffffffffff virtual false final false
static inline TDerived InstallFromResource(::StringW  resourcePath, ::Zenject::DiContainer*  container, TParam1  p1) ;

static inline ::Zenject::MonoInstaller_2<TParam1,TDerived>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "MonoInstaller_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoInstaller_2(MonoInstaller_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoInstaller_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoInstaller_2(MonoInstaller_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MonoInstaller_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::MonoInstaller_2, "Zenject", "MonoInstaller`2");
