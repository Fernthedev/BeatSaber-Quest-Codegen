#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DataConvertor_1)
namespace GlobalNamespace {
template<typename TOut>
class DataItemConvertor_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class Type;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class DataConvertor_1;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type T>
class DataConvertor_1<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::DataConvertor_1);
// Type: ::DataConvertor`1
// Type: ::DataConvertor`1
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(4290))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4290), inst: 2 })
// CS Name: ::DataConvertor`1<T>*
class CORDL_TYPE DataConvertor_1<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field _convertors offset 0x10
 __declspec(property(get=__get__convertors, put=__set__convertors)) ::System::Collections::Generic::Dictionary_2<::System::Type*,::GlobalNamespace::DataItemConvertor_1<T>*>*  _convertors;

constexpr void __set__convertors(::System::Collections::Generic::Dictionary_2<::System::Type*,::GlobalNamespace::DataItemConvertor_1<T>*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::GlobalNamespace::DataItemConvertor_1<T>*>* __get__convertors() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Type*,::GlobalNamespace::DataItemConvertor_1<T>*>*> __get__convertors() const;

/// @brief Method ProcessItem addr 0x0 size 0xffffffffffffffff virtual false final false
inline T ProcessItem(::System::Object*  item) ;

/// @brief Method AddConvertor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AddConvertor(::GlobalNamespace::DataItemConvertor_1<T>*  dataItemConvertor) ;

static inline ::GlobalNamespace::DataConvertor_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "DataConvertor_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DataConvertor_1(DataConvertor_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DataConvertor_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DataConvertor_1(DataConvertor_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DataConvertor_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::DataConvertor_1, "", "DataConvertor`1");
