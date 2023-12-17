#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__DataItemConvertor_1_def.hpp"
CORDL_MODULE_EXPORT(DataItemConvertor_3)
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TBase,typename TIn,typename TOut>
class DataItemConvertor_3;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type TBase,::il2cpp_utils::il2cpp_reference_type TIn,::il2cpp_utils::il2cpp_reference_type TOut>
class DataItemConvertor_3<TBase,TIn,TOut>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::DataItemConvertor_3);
// Type: ::DataItemConvertor`3
// Type: ::DataItemConvertor`3
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TBase,::il2cpp_utils::il2cpp_reference_type TIn,::il2cpp_utils::il2cpp_reference_type TOut>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4291)), TypeDefinitionIndex(TypeDefinitionIndex(4292)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4291), inst: 1151 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4292), inst: 5330 })
// CS Name: ::DataItemConvertor`3<TBase,TIn,TOut>*
class CORDL_TYPE DataItemConvertor_3<TBase,TIn,TOut> : public ::GlobalNamespace::DataItemConvertor_1<TBase> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::GlobalNamespace::DataItemConvertor_1<TBase>)]{};

 __declspec(property(get=get_inputDataType)) ::System::Type*  inputDataType;

/// @brief Method get_inputDataType addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Type* get_inputDataType() ;

/// @brief Method Convert addr 0x0 size 0xffffffffffffffff virtual true final false
inline TBase Convert(::System::Object*  item) ;

/// @brief Method Convert addr 0x0 size 0xffffffffffffffff virtual true final false
inline TOut Convert(TIn  item) ;

static inline ::GlobalNamespace::DataItemConvertor_3<TBase,TIn,TOut>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "DataItemConvertor_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DataItemConvertor_3(DataItemConvertor_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DataItemConvertor_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DataItemConvertor_3(DataItemConvertor_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DataItemConvertor_3()  = default;
public:


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::DataItemConvertor_3, "", "DataItemConvertor`3");
