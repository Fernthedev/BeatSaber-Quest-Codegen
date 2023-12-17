#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__ScriptableObjectInstaller_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ScriptableObjectInstaller_1)
namespace Zenject {
class InjectTypeInfo;
}
namespace System {
class Object;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace Zenject {
template<typename TDerived>
class ScriptableObjectInstaller_1;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TDerived>
class ScriptableObjectInstaller_1<TDerived>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::ScriptableObjectInstaller_1);
// Type: Zenject::ScriptableObjectInstaller`1
// Type: Zenject::ScriptableObjectInstaller`1
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TDerived>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11147)), TypeDefinitionIndex(TypeDefinitionIndex(11148))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11148), inst: 2 })
// CS Name: ::Zenject::ScriptableObjectInstaller`1<TDerived>*
class CORDL_TYPE ScriptableObjectInstaller_1<TDerived> : public ::Zenject::ScriptableObjectInstaller {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::Zenject::ScriptableObjectInstaller)]{};

/// @brief Method InstallFromResource addr 0x0 size 0xffffffffffffffff virtual false final false
static inline TDerived InstallFromResource(::Zenject::DiContainer*  container) ;

/// @brief Method InstallFromResource addr 0x0 size 0xffffffffffffffff virtual false final false
static inline TDerived InstallFromResource(::StringW  resourcePath, ::Zenject::DiContainer*  container) ;

static inline ::Zenject::ScriptableObjectInstaller_1<TDerived>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "ScriptableObjectInstaller_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ScriptableObjectInstaller_1(ScriptableObjectInstaller_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScriptableObjectInstaller_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScriptableObjectInstaller_1(ScriptableObjectInstaller_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ScriptableObjectInstaller_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::ScriptableObjectInstaller_1, "Zenject", "ScriptableObjectInstaller`1");
