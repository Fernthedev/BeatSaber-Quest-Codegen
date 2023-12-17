#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__KeyedFactoryBase_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(KeyedFactory_3)
namespace Zenject {
class InjectTypeInfo;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Zenject {
template<typename TBase,typename TKey,typename TParam1>
class KeyedFactory_3;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TBase,::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TParam1>
class KeyedFactory_3<TBase,TKey,TParam1>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::KeyedFactory_3);
// Type: Zenject::KeyedFactory`3
// Type: Zenject::KeyedFactory`3
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TBase,::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TParam1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10995)), TypeDefinitionIndex(TypeDefinitionIndex(10997)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10995), inst: 3947 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10997), inst: 5330 })
// CS Name: ::Zenject::KeyedFactory`3<TBase,TKey,TParam1>*
class CORDL_TYPE KeyedFactory_3<TBase,TKey,TParam1> : public ::Zenject::KeyedFactoryBase_2<TBase,TKey> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Zenject::KeyedFactoryBase_2<TBase,TKey>)]{};

 __declspec(property(get=get_ProvidedTypes)) ::System::Collections::Generic::IEnumerable_1<::System::Type*>*  ProvidedTypes;

/// @brief Method get_ProvidedTypes addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* get_ProvidedTypes() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual true final false
inline TBase Create(TKey  key, TParam1  param1) ;

static inline ::Zenject::KeyedFactory_3<TBase,TKey,TParam1>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "KeyedFactory_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
KeyedFactory_3(KeyedFactory_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KeyedFactory_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
KeyedFactory_3(KeyedFactory_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 KeyedFactory_3()  = default;
public:


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::KeyedFactory_3, "Zenject", "KeyedFactory`3");
