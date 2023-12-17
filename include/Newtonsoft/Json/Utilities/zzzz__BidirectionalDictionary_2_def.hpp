#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BidirectionalDictionary_2)
namespace System::Collections::Generic {
template<typename T>
class IEqualityComparer_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
template<typename TFirst,typename TSecond>
class BidirectionalDictionary_2;
}
namespace Newtonsoft::Json::Utilities {
template<::il2cpp_utils::il2cpp_reference_type TFirst,::il2cpp_utils::il2cpp_reference_type TSecond>
class BidirectionalDictionary_2<TFirst,TSecond>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Newtonsoft::Json::Utilities::BidirectionalDictionary_2);
// Type: Newtonsoft.Json.Utilities::BidirectionalDictionary`2
// Type: Newtonsoft.Json.Utilities::BidirectionalDictionary`2
namespace Newtonsoft::Json::Utilities {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TFirst,::il2cpp_utils::il2cpp_reference_type TSecond>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11869)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11869), inst: 81 })
// CS Name: ::Newtonsoft.Json.Utilities::BidirectionalDictionary`2<TFirst,TSecond>*
class CORDL_TYPE BidirectionalDictionary_2<TFirst,TSecond> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field _firstToSecond offset 0x10
 __declspec(property(get=__get__firstToSecond, put=__set__firstToSecond)) ::System::Collections::Generic::IDictionary_2<TFirst,TSecond>*  _firstToSecond;

/// @brief Field _secondToFirst offset 0x18
 __declspec(property(get=__get__secondToFirst, put=__set__secondToFirst)) ::System::Collections::Generic::IDictionary_2<TSecond,TFirst>*  _secondToFirst;

/// @brief Field _duplicateFirstErrorMessage offset 0x20
 __declspec(property(get=__get__duplicateFirstErrorMessage, put=__set__duplicateFirstErrorMessage)) ::StringW  _duplicateFirstErrorMessage;

/// @brief Field _duplicateSecondErrorMessage offset 0x28
 __declspec(property(get=__get__duplicateSecondErrorMessage, put=__set__duplicateSecondErrorMessage)) ::StringW  _duplicateSecondErrorMessage;

constexpr void __set__firstToSecond(::System::Collections::Generic::IDictionary_2<TFirst,TSecond>*  value) ;

constexpr ::System::Collections::Generic::IDictionary_2<TFirst,TSecond>* __get__firstToSecond() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IDictionary_2<TFirst,TSecond>*> __get__firstToSecond() const;

constexpr void __set__secondToFirst(::System::Collections::Generic::IDictionary_2<TSecond,TFirst>*  value) ;

constexpr ::System::Collections::Generic::IDictionary_2<TSecond,TFirst>* __get__secondToFirst() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IDictionary_2<TSecond,TFirst>*> __get__secondToFirst() const;

constexpr void __set__duplicateFirstErrorMessage(::StringW  value) ;

constexpr ::StringW& __get__duplicateFirstErrorMessage() ;

constexpr ::StringW const& __get__duplicateFirstErrorMessage() const;

constexpr void __set__duplicateSecondErrorMessage(::StringW  value) ;

constexpr ::StringW& __get__duplicateSecondErrorMessage() ;

constexpr ::StringW const& __get__duplicateSecondErrorMessage() const;

static inline ::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst,TSecond>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst,TSecond>* New_ctor(::System::Collections::Generic::IEqualityComparer_1<TFirst>*  firstEqualityComparer, ::System::Collections::Generic::IEqualityComparer_1<TSecond>*  secondEqualityComparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IEqualityComparer_1<TFirst>*  firstEqualityComparer, ::System::Collections::Generic::IEqualityComparer_1<TSecond>*  secondEqualityComparer) ;

static inline ::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst,TSecond>* New_ctor(::System::Collections::Generic::IEqualityComparer_1<TFirst>*  firstEqualityComparer, ::System::Collections::Generic::IEqualityComparer_1<TSecond>*  secondEqualityComparer, ::StringW  duplicateFirstErrorMessage, ::StringW  duplicateSecondErrorMessage) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IEqualityComparer_1<TFirst>*  firstEqualityComparer, ::System::Collections::Generic::IEqualityComparer_1<TSecond>*  secondEqualityComparer, ::StringW  duplicateFirstErrorMessage, ::StringW  duplicateSecondErrorMessage) ;

/// @brief Method Set addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Set(TFirst  first, TSecond  second) ;

/// @brief Method TryGetByFirst addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TryGetByFirst(TFirst  first, ByRef<TSecond>  second) ;

/// @brief Method TryGetBySecond addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TryGetBySecond(TSecond  second, ByRef<TFirst>  first) ;

// Ctor Parameters [CppParam { name: "", ty: "BidirectionalDictionary_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BidirectionalDictionary_2(BidirectionalDictionary_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BidirectionalDictionary_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BidirectionalDictionary_2(BidirectionalDictionary_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BidirectionalDictionary_2()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Utilities
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Newtonsoft::Json::Utilities::BidirectionalDictionary_2, "Newtonsoft.Json.Utilities", "BidirectionalDictionary`2");
