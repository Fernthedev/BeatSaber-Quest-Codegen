#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__FactoryToChoiceBinder_5_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(FactoryArgumentsToChoiceBinder_5)
namespace Zenject {
class FactoryBindInfo;
}
namespace Zenject {
struct TypeValuePair;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TContract>
class FactoryToChoiceBinder_5;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TContract>
class FactoryArgumentsToChoiceBinder_5;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3,::il2cpp_utils::il2cpp_reference_type TParam4,::il2cpp_utils::il2cpp_reference_type TContract>
class FactoryArgumentsToChoiceBinder_5<TParam1,TParam2,TParam3,TParam4,TContract>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::FactoryArgumentsToChoiceBinder_5);
// Type: Zenject::FactoryArgumentsToChoiceBinder`5
// Type: Zenject::FactoryArgumentsToChoiceBinder`5
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3,::il2cpp_utils::il2cpp_reference_type TParam4,::il2cpp_utils::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10853), inst: 1911 }), TypeDefinitionIndex(TypeDefinitionIndex(10708)), TypeDefinitionIndex(TypeDefinitionIndex(10853))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10708), inst: 6125 })
// CS Name: ::Zenject::FactoryArgumentsToChoiceBinder`5<TParam1,TParam2,TParam3,TParam4,TContract>*
class CORDL_TYPE FactoryArgumentsToChoiceBinder_5<TParam1,TParam2,TParam3,TParam4,TContract> : public ::Zenject::FactoryToChoiceBinder_5<TParam1,TParam2,TParam3,TParam4,TContract> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::Zenject::FactoryToChoiceBinder_5<TParam1,TParam2,TParam3,TParam4,TContract>)]{};

static inline ::Zenject::FactoryArgumentsToChoiceBinder_5<TParam1,TParam2,TParam3,TParam4,TContract>* New_ctor(::Zenject::DiContainer*  bindContainer, ::Zenject::BindInfo*  bindInfo, ::Zenject::FactoryBindInfo*  factoryBindInfo) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Zenject::DiContainer*  bindContainer, ::Zenject::BindInfo*  bindInfo, ::Zenject::FactoryBindInfo*  factoryBindInfo) ;

/// @brief Method WithFactoryArguments addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
inline ::Zenject::FactoryToChoiceBinder_5<TParam1,TParam2,TParam3,TParam4,TContract>* WithFactoryArguments(T  param) ;

/// @brief Method WithFactoryArguments addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TFactoryParam1,typename TFactoryParam2>
inline ::Zenject::FactoryToChoiceBinder_5<TParam1,TParam2,TParam3,TParam4,TContract>* WithFactoryArguments(TFactoryParam1  param1, TFactoryParam2  param2) ;

/// @brief Method WithFactoryArguments addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TFactoryParam1,typename TFactoryParam2,typename TFactoryParam3>
inline ::Zenject::FactoryToChoiceBinder_5<TParam1,TParam2,TParam3,TParam4,TContract>* WithFactoryArguments(TFactoryParam1  param1, TFactoryParam2  param2, TFactoryParam3  param3) ;

/// @brief Method WithFactoryArguments addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TFactoryParam1,typename TFactoryParam2,typename TFactoryParam3,typename TFactoryParam4>
inline ::Zenject::FactoryToChoiceBinder_5<TParam1,TParam2,TParam3,TParam4,TContract>* WithFactoryArguments(TFactoryParam1  param1, TFactoryParam2  param2, TFactoryParam3  param3, TFactoryParam4  param4) ;

/// @brief Method WithFactoryArguments addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TFactoryParam1,typename TFactoryParam2,typename TFactoryParam3,typename TFactoryParam4,typename TFactoryParam5>
inline ::Zenject::FactoryToChoiceBinder_5<TParam1,TParam2,TParam3,TParam4,TContract>* WithFactoryArguments(TFactoryParam1  param1, TFactoryParam2  param2, TFactoryParam3  param3, TFactoryParam4  param4, TFactoryParam5  param5) ;

/// @brief Method WithFactoryArguments addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TFactoryParam1,typename TFactoryParam2,typename TFactoryParam3,typename TFactoryParam4,typename TFactoryParam5,typename TFactoryParam6>
inline ::Zenject::FactoryToChoiceBinder_5<TParam1,TParam2,TParam3,TParam4,TContract>* WithFactoryArguments(TFactoryParam1  param1, TFactoryParam2  param2, TFactoryParam3  param3, TFactoryParam4  param4, TFactoryParam5  param5, TFactoryParam6  param6) ;

/// @brief Method WithFactoryArguments addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::FactoryToChoiceBinder_5<TParam1,TParam2,TParam3,TParam4,TContract>* WithFactoryArguments(::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method WithFactoryArgumentsExplicit addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::FactoryToChoiceBinder_5<TParam1,TParam2,TParam3,TParam4,TContract>* WithFactoryArgumentsExplicit(::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>*  extraArgs) ;

// Ctor Parameters [CppParam { name: "", ty: "FactoryArgumentsToChoiceBinder_5", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FactoryArgumentsToChoiceBinder_5(FactoryArgumentsToChoiceBinder_5 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FactoryArgumentsToChoiceBinder_5", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FactoryArgumentsToChoiceBinder_5(FactoryArgumentsToChoiceBinder_5 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FactoryArgumentsToChoiceBinder_5()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::FactoryArgumentsToChoiceBinder_5, "Zenject", "FactoryArgumentsToChoiceBinder`5");
