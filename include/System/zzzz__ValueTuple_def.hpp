#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ValueTuple)
namespace System::Collections {
class IEqualityComparer;
}
namespace System::Collections {
class IStructuralEquatable;
}
namespace System::Collections {
class IComparer;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class IComparable;
}
namespace System {
class Object;
}
namespace System::Collections {
class IStructuralComparable;
}
namespace System {
class IValueTupleInternal;
}
namespace System::Runtime::CompilerServices {
class ITuple;
}
namespace System {
template<typename T>
class IComparable_1;
}
// Forward declare root types
namespace System {
struct ValueTuple;
}
// Write type traits
MARK_VAL_T(::System::ValueTuple);
// Type: System::ValueTuple
namespace System {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2505))
// CS Name: ::System::ValueTuple
struct CORDL_TYPE ValueTuple : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

 __declspec(property(get=System_Runtime_CompilerServices_ITuple_get_Length)) int32_t  System_Runtime_CompilerServices_ITuple_Length;

/// @brief Convert operator to "::System::IEquatable_1<::System::ValueTuple>"
constexpr operator  ::System::IEquatable_1<::System::ValueTuple>*() ;

/// @brief Convert operator to "::System::Collections::IStructuralEquatable"
constexpr operator  ::System::Collections::IStructuralEquatable*() ;

/// @brief Convert operator to "::System::Collections::IStructuralComparable"
constexpr operator  ::System::Collections::IStructuralComparable*() ;

/// @brief Convert operator to "::System::IComparable"
constexpr operator  ::System::IComparable*() ;

/// @brief Convert operator to "::System::IComparable_1<::System::ValueTuple>"
constexpr operator  ::System::IComparable_1<::System::ValueTuple>*() ;

/// @brief Convert operator to "::System::IValueTupleInternal"
constexpr operator  ::System::IValueTupleInternal*() ;

/// @brief Convert operator to "::System::Runtime::CompilerServices::ITuple"
constexpr operator  ::System::Runtime::CompilerServices::ITuple*() ;

/// @brief Method Equals addr 0x25ce100 size 0x5c virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals addr 0x25ce15c size 0x8 virtual true final true
inline bool Equals(::System::ValueTuple  other) ;

/// @brief Method System.Collections.IStructuralEquatable.Equals addr 0x25ce164 size 0x5c virtual true final true
inline bool System_Collections_IStructuralEquatable_Equals(::System::Object*  other, ::System::Collections::IEqualityComparer*  comparer) ;

/// @brief Method System.IComparable.CompareTo addr 0x25ce1c0 size 0x118 virtual true final true
inline int32_t System_IComparable_CompareTo(::System::Object*  other) ;

/// @brief Method CompareTo addr 0x25ce2d8 size 0x8 virtual true final true
inline int32_t CompareTo(::System::ValueTuple  other) ;

/// @brief Method System.Collections.IStructuralComparable.CompareTo addr 0x25ce2e0 size 0x118 virtual true final true
inline int32_t System_Collections_IStructuralComparable_CompareTo(::System::Object*  other, ::System::Collections::IComparer*  comparer) ;

/// @brief Method GetHashCode addr 0x25ce3f8 size 0x8 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method System.Collections.IStructuralEquatable.GetHashCode addr 0x25ce400 size 0x8 virtual true final true
inline int32_t System_Collections_IStructuralEquatable_GetHashCode(::System::Collections::IEqualityComparer*  comparer) ;

/// @brief Method System.IValueTupleInternal.GetHashCode addr 0x25ce408 size 0x8 virtual true final true
inline int32_t System_IValueTupleInternal_GetHashCode(::System::Collections::IEqualityComparer*  comparer) ;

/// @brief Method ToString addr 0x25ce410 size 0x40 virtual true final false
inline ::StringW ToString() ;

/// @brief Method System.IValueTupleInternal.ToStringEnd addr 0x25ce450 size 0x40 virtual true final true
inline ::StringW System_IValueTupleInternal_ToStringEnd() ;

/// @brief Method System.Runtime.CompilerServices.ITuple.get_Length addr 0x25ce490 size 0x8 virtual true final true
inline int32_t System_Runtime_CompilerServices_ITuple_get_Length() ;

/// @brief Method CombineHashCodes addr 0x25ce498 size 0x7c virtual false final false
static inline int32_t CombineHashCodes(int32_t  h1, int32_t  h2) ;

/// @brief Method CombineHashCodes addr 0x25ce514 size 0x80 virtual false final false
static inline int32_t CombineHashCodes(int32_t  h1, int32_t  h2, int32_t  h3) ;

/// @brief Method CombineHashCodes addr 0x25ce594 size 0x90 virtual false final false
static inline int32_t CombineHashCodes(int32_t  h1, int32_t  h2, int32_t  h3, int32_t  h4) ;

/// @brief Method CombineHashCodes addr 0x25ce624 size 0x98 virtual false final false
static inline int32_t CombineHashCodes(int32_t  h1, int32_t  h2, int32_t  h3, int32_t  h4, int32_t  h5) ;

/// @brief Method CombineHashCodes addr 0x25ce6bc size 0xa8 virtual false final false
static inline int32_t CombineHashCodes(int32_t  h1, int32_t  h2, int32_t  h3, int32_t  h4, int32_t  h5, int32_t  h6) ;

/// @brief Method CombineHashCodes addr 0x25ce764 size 0xb0 virtual false final false
static inline int32_t CombineHashCodes(int32_t  h1, int32_t  h2, int32_t  h3, int32_t  h4, int32_t  h5, int32_t  h6, int32_t  h7) ;

/// @brief Method CombineHashCodes addr 0x25ce814 size 0xc0 virtual false final false
static inline int32_t CombineHashCodes(int32_t  h1, int32_t  h2, int32_t  h3, int32_t  h4, int32_t  h5, int32_t  h6, int32_t  h7, int32_t  h8) ;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ValueTuple(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ValueTuple()  = default;


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ValueTuple, 0x1>, "Size mismatch!");

} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(::System::ValueTuple, "System", "ValueTuple");
