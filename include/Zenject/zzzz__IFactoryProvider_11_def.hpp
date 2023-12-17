#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__IFactoryProviderBase_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(IFactoryProvider_11)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
struct Guid;
}
namespace Zenject {
class InjectContext;
}
namespace System {
class Action;
}
namespace System {
class Object;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
struct TypeValuePair;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TParam6,typename TParam7,typename TParam8,typename TParam9,typename TParam10,typename TContract>
class IFactoryProvider_11;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3,::il2cpp_utils::il2cpp_reference_type TParam4,::il2cpp_utils::il2cpp_reference_type TParam5,::il2cpp_utils::il2cpp_reference_type TParam6,::il2cpp_utils::il2cpp_reference_type TParam7,::il2cpp_utils::il2cpp_reference_type TParam8,::il2cpp_utils::il2cpp_reference_type TParam9,::il2cpp_utils::il2cpp_reference_type TParam10,::il2cpp_utils::il2cpp_reference_type TContract>
class IFactoryProvider_11<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10,TContract>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::IFactoryProvider_11);
// Type: Zenject::IFactoryProvider`11
// Type: Zenject::IFactoryProvider`11
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3,::il2cpp_utils::il2cpp_reference_type TParam4,::il2cpp_utils::il2cpp_reference_type TParam5,::il2cpp_utils::il2cpp_reference_type TParam6,::il2cpp_utils::il2cpp_reference_type TParam7,::il2cpp_utils::il2cpp_reference_type TParam8,::il2cpp_utils::il2cpp_reference_type TParam9,::il2cpp_utils::il2cpp_reference_type TParam10,::il2cpp_utils::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11194), inst: 3465 }), TypeDefinitionIndex(TypeDefinitionIndex(11194)), TypeDefinitionIndex(TypeDefinitionIndex(11202))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11202), inst: 6143 })
// CS Name: ::Zenject::IFactoryProvider`11<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10,TContract>*
class CORDL_TYPE IFactoryProvider_11<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10,TContract> : public ::Zenject::IFactoryProviderBase_1<TContract> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Zenject::IFactoryProviderBase_1<TContract>)]{};

static inline ::Zenject::IFactoryProvider_11<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10,TContract>* New_ctor(::Zenject::DiContainer*  container, ::System::Guid  factoryId) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Zenject::DiContainer*  container, ::System::Guid  factoryId) ;

/// @brief Method GetAllInstancesWithInjectSplit addr 0x0 size 0xffffffffffffffff virtual true final false
inline void GetAllInstancesWithInjectSplit(::Zenject::InjectContext*  context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  args, ByRef<::System::Action*>  injectAction, ::System::Collections::Generic::List_1<::System::Object*>*  buffer) ;

// Ctor Parameters [CppParam { name: "", ty: "IFactoryProvider_11", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IFactoryProvider_11(IFactoryProvider_11 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IFactoryProvider_11", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IFactoryProvider_11(IFactoryProvider_11 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 IFactoryProvider_11()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::IFactoryProvider_11, "Zenject", "IFactoryProvider`11");
