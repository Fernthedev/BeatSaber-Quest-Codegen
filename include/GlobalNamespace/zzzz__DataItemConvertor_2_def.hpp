#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DataItemConvertor_2)
namespace System {
class Type;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TOut,typename TParam>
class DataItemConvertor_2;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type TOut,::il2cpp_utils::il2cpp_reference_type TParam>
class DataItemConvertor_2<TOut,TParam>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::DataItemConvertor_2);
// Type: ::DataItemConvertor`2
// Type: ::DataItemConvertor`2
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TOut,::il2cpp_utils::il2cpp_reference_type TParam>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(4296))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4296), inst: 81 })
// CS Name: ::DataItemConvertor`2<TOut,TParam>*
class CORDL_TYPE DataItemConvertor_2<TOut,TParam> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

 __declspec(property(get=get_inputDataType)) ::System::Type*  inputDataType;

/// @brief Method Convert addr 0x0 size 0xffffffffffffffff virtual true final false
inline TOut Convert(::System::Object*  item, TParam  param) ;

/// @brief Method get_inputDataType addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Type* get_inputDataType() ;

static inline ::GlobalNamespace::DataItemConvertor_2<TOut,TParam>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "DataItemConvertor_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DataItemConvertor_2(DataItemConvertor_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DataItemConvertor_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DataItemConvertor_2(DataItemConvertor_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DataItemConvertor_2()  = default;
public:


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::DataItemConvertor_2, "", "DataItemConvertor`2");
