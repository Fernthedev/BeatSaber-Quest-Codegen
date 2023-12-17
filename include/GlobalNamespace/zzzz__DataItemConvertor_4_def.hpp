#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__DataItemConvertor_2_def.hpp"
CORDL_MODULE_EXPORT(DataItemConvertor_4)
namespace System {
class Type;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TBase,typename TIn,typename TOut,typename TParam>
class DataItemConvertor_4;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type TBase,::il2cpp_utils::il2cpp_reference_type TIn,::il2cpp_utils::il2cpp_reference_type TOut,::il2cpp_utils::il2cpp_reference_type TParam>
class DataItemConvertor_4<TBase,TIn,TOut,TParam>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::DataItemConvertor_4);
// Type: ::DataItemConvertor`4
// Type: ::DataItemConvertor`4
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TBase,::il2cpp_utils::il2cpp_reference_type TIn,::il2cpp_utils::il2cpp_reference_type TOut,::il2cpp_utils::il2cpp_reference_type TParam>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4296), inst: 1154 }), TypeDefinitionIndex(TypeDefinitionIndex(4297)), TypeDefinitionIndex(TypeDefinitionIndex(4296))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4297), inst: 6124 })
// CS Name: ::DataItemConvertor`4<TBase,TIn,TOut,TParam>*
class CORDL_TYPE DataItemConvertor_4<TBase,TIn,TOut,TParam> : public ::GlobalNamespace::DataItemConvertor_2<TBase,TParam> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::GlobalNamespace::DataItemConvertor_2<TBase,TParam>)]{};

 __declspec(property(get=get_inputDataType)) ::System::Type*  inputDataType;

/// @brief Method get_inputDataType addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Type* get_inputDataType() ;

/// @brief Method Convert addr 0x0 size 0xffffffffffffffff virtual true final false
inline TBase Convert(::System::Object*  item, TParam  param) ;

/// @brief Method Convert addr 0x0 size 0xffffffffffffffff virtual true final false
inline TOut Convert(TIn  item, TParam  param) ;

static inline ::GlobalNamespace::DataItemConvertor_4<TBase,TIn,TOut,TParam>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "DataItemConvertor_4", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DataItemConvertor_4(DataItemConvertor_4 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DataItemConvertor_4", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DataItemConvertor_4(DataItemConvertor_4 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DataItemConvertor_4()  = default;
public:


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::DataItemConvertor_4, "", "DataItemConvertor`4");
