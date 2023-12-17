#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DataConvertorWithCustomTypeAndParam_3)
namespace GlobalNamespace {
template<typename TOut,typename TParam>
class DataItemConvertor_2;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T,typename TType,typename TParam>
class DataConvertorWithCustomTypeAndParam_3;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TType,::il2cpp_utils::il2cpp_reference_type TParam>
class DataConvertorWithCustomTypeAndParam_3<T,TType,TParam>;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type T,::cordl_internals::is_or_is_backed_by<int32_t> TType,::il2cpp_utils::il2cpp_reference_type TParam>
class DataConvertorWithCustomTypeAndParam_3<T,TType,TParam>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::DataConvertorWithCustomTypeAndParam_3);
// Type: ::DataConvertorWithCustomTypeAndParam`3
// Type: ::DataConvertorWithCustomTypeAndParam`3
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T,::cordl_internals::is_or_is_backed_by<int32_t> TType,::il2cpp_utils::il2cpp_reference_type TParam>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4294)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4294), inst: 6142 })
// CS Name: ::DataConvertorWithCustomTypeAndParam`3<T,TType,TParam>*
class CORDL_TYPE DataConvertorWithCustomTypeAndParam_3<T,TType,TParam> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field _convertors offset 0x10
 __declspec(property(get=__get__convertors, put=__set__convertors)) ::System::Collections::Generic::Dictionary_2<TType,::GlobalNamespace::DataItemConvertor_2<T,TParam>*>*  _convertors;

constexpr void __set__convertors(::System::Collections::Generic::Dictionary_2<TType,::GlobalNamespace::DataItemConvertor_2<T,TParam>*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<TType,::GlobalNamespace::DataItemConvertor_2<T,TParam>*>* __get__convertors() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<TType,::GlobalNamespace::DataItemConvertor_2<T,TParam>*>*> __get__convertors() const;

/// @brief Method ProcessItem addr 0x0 size 0xffffffffffffffff virtual false final false
inline T ProcessItem(::System::Object*  item, TParam  param, TType  type) ;

/// @brief Method AddConvertor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AddConvertor(TType  type, ::GlobalNamespace::DataItemConvertor_2<T,TParam>*  dataItemConvertor) ;

static inline ::GlobalNamespace::DataConvertorWithCustomTypeAndParam_3<T,TType,TParam>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "DataConvertorWithCustomTypeAndParam_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DataConvertorWithCustomTypeAndParam_3(DataConvertorWithCustomTypeAndParam_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DataConvertorWithCustomTypeAndParam_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DataConvertorWithCustomTypeAndParam_3(DataConvertorWithCustomTypeAndParam_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DataConvertorWithCustomTypeAndParam_3()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::DataConvertorWithCustomTypeAndParam`3
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TType,::il2cpp_utils::il2cpp_reference_type TParam>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(4294))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4294), inst: 5330 })
// CS Name: ::DataConvertorWithCustomTypeAndParam`3<T,TType,TParam>*
class CORDL_TYPE DataConvertorWithCustomTypeAndParam_3<T,TType,TParam> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field _convertors offset 0x10
 __declspec(property(get=__get__convertors, put=__set__convertors)) ::System::Collections::Generic::Dictionary_2<TType,::GlobalNamespace::DataItemConvertor_2<T,TParam>*>*  _convertors;

constexpr void __set__convertors(::System::Collections::Generic::Dictionary_2<TType,::GlobalNamespace::DataItemConvertor_2<T,TParam>*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<TType,::GlobalNamespace::DataItemConvertor_2<T,TParam>*>* __get__convertors() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<TType,::GlobalNamespace::DataItemConvertor_2<T,TParam>*>*> __get__convertors() const;

/// @brief Method ProcessItem addr 0x0 size 0xffffffffffffffff virtual false final false
inline T ProcessItem(::System::Object*  item, TParam  param, TType  type) ;

/// @brief Method AddConvertor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AddConvertor(TType  type, ::GlobalNamespace::DataItemConvertor_2<T,TParam>*  dataItemConvertor) ;

static inline ::GlobalNamespace::DataConvertorWithCustomTypeAndParam_3<T,TType,TParam>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "DataConvertorWithCustomTypeAndParam_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DataConvertorWithCustomTypeAndParam_3(DataConvertorWithCustomTypeAndParam_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DataConvertorWithCustomTypeAndParam_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DataConvertorWithCustomTypeAndParam_3(DataConvertorWithCustomTypeAndParam_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DataConvertorWithCustomTypeAndParam_3()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::DataConvertorWithCustomTypeAndParam_3, "", "DataConvertorWithCustomTypeAndParam`3");
