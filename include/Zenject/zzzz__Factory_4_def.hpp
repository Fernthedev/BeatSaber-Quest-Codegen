#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__PlaceholderFactory_4_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(Factory_4)
namespace Zenject {
class InjectTypeInfo;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TValue>
class Factory_4;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3,::il2cpp_utils::il2cpp_reference_type TValue>
class Factory_4<TParam1,TParam2,TParam3,TValue>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::Factory_4);
// Type: Zenject::Factory`4
// Type: Zenject::Factory`4
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3,::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11011), inst: 3506 }), TypeDefinitionIndex(TypeDefinitionIndex(11012)), TypeDefinitionIndex(TypeDefinitionIndex(11011))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11012), inst: 6124 })
// CS Name: ::Zenject::Factory`4<TParam1,TParam2,TParam3,TValue>*
class CORDL_TYPE Factory_4<TParam1,TParam2,TParam3,TValue> : public ::Zenject::PlaceholderFactory_4<TParam1,TParam2,TParam3,TValue> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::Zenject::PlaceholderFactory_4<TParam1,TParam2,TParam3,TValue>)]{};

static inline ::Zenject::Factory_4<TParam1,TParam2,TParam3,TValue>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "Factory_4", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Factory_4(Factory_4 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Factory_4", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Factory_4(Factory_4 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Factory_4()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::Factory_4, "Zenject", "Factory`4");
