#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DataItemConvertor_1)
namespace System {
class Type;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TOut>
class DataItemConvertor_1;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type TOut>
class DataItemConvertor_1<TOut>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::DataItemConvertor_1);
// Type: ::DataItemConvertor`1
// Type: ::DataItemConvertor`1
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TOut>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(4291))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4291), inst: 2 })
// CS Name: ::DataItemConvertor`1<TOut>*
class CORDL_TYPE DataItemConvertor_1<TOut> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

 __declspec(property(get=get_inputDataType)) ::System::Type*  inputDataType;

/// @brief Method Convert addr 0x0 size 0xffffffffffffffff virtual true final false
inline TOut Convert(::System::Object*  item) ;

/// @brief Method get_inputDataType addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Type* get_inputDataType() ;

static inline ::GlobalNamespace::DataItemConvertor_1<TOut>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "DataItemConvertor_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DataItemConvertor_1(DataItemConvertor_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DataItemConvertor_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DataItemConvertor_1(DataItemConvertor_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DataItemConvertor_1()  = default;
public:


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::DataItemConvertor_1, "", "DataItemConvertor`1");
