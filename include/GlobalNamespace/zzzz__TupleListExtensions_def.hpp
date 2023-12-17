#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TupleListExtensions)
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Tuple_3;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4>
class Tuple_4;
}
namespace System {
template<typename T1,typename T2>
class Tuple_2;
}
// Forward declare root types
namespace GlobalNamespace {
class TupleListExtensions;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TupleListExtensions);
// Type: ::TupleListExtensions
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15834))
// CS Name: ::TupleListExtensions*
class CORDL_TYPE TupleListExtensions : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T1,typename T2>
static inline void Add(::System::Collections::Generic::IList_1<::System::Tuple_2<T1,T2>*>*  list, T1  item1, T2  item2) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T1,typename T2,typename T3>
static inline void Add(::System::Collections::Generic::IList_1<::System::Tuple_3<T1,T2,T3>*>*  list, T1  item1, T2  item2, T3  item3) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T1,typename T2,typename T3,typename T4>
static inline void Add(::System::Collections::Generic::IList_1<::System::Tuple_4<T1,T2,T3,T4>*>*  list, T1  item1, T2  item2, T3  item3, T4  item4) ;

// Ctor Parameters [CppParam { name: "", ty: "TupleListExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TupleListExtensions(TupleListExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TupleListExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TupleListExtensions(TupleListExtensions const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TupleListExtensions()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TupleListExtensions, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TupleListExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TupleListExtensions*, "", "TupleListExtensions");
