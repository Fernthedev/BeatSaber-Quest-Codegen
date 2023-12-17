#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__IFactoryProviderBase_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(IFactoryProvider_3)
namespace Zenject {
struct TypeValuePair;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
struct Guid;
}
namespace System {
class Object;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class InjectContext;
}
namespace System {
class Action;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TContract>
class IFactoryProvider_3;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TContract>
class IFactoryProvider_3<TParam1,TParam2,TContract>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::IFactoryProvider_3);
// Type: Zenject::IFactoryProvider`3
// Type: Zenject::IFactoryProvider`3
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11197)), TypeDefinitionIndex(TypeDefinitionIndex(11194)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11194), inst: 3460 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11197), inst: 5330 })
// CS Name: ::Zenject::IFactoryProvider`3<TParam1,TParam2,TContract>*
class CORDL_TYPE IFactoryProvider_3<TParam1,TParam2,TContract> : public ::Zenject::IFactoryProviderBase_1<TContract> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Zenject::IFactoryProviderBase_1<TContract>)]{};

static inline ::Zenject::IFactoryProvider_3<TParam1,TParam2,TContract>* New_ctor(::Zenject::DiContainer*  container, ::System::Guid  factoryId) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Zenject::DiContainer*  container, ::System::Guid  factoryId) ;

/// @brief Method GetAllInstancesWithInjectSplit addr 0x0 size 0xffffffffffffffff virtual true final false
inline void GetAllInstancesWithInjectSplit(::Zenject::InjectContext*  context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  args, ByRef<::System::Action*>  injectAction, ::System::Collections::Generic::List_1<::System::Object*>*  buffer) ;

// Ctor Parameters [CppParam { name: "", ty: "IFactoryProvider_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IFactoryProvider_3(IFactoryProvider_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IFactoryProvider_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IFactoryProvider_3(IFactoryProvider_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 IFactoryProvider_3()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::IFactoryProvider_3, "Zenject", "IFactoryProvider`3");
