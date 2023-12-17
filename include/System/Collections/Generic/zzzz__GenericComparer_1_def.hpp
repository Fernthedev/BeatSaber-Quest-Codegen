#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__Comparer_1_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GenericComparer_1)
namespace System {
struct DateTime;
}
namespace System {
class Object;
}
namespace System {
struct DateTimeOffset;
}
namespace System {
struct Decimal;
}
namespace System {
struct Guid;
}
namespace System {
struct TimeSpan;
}
namespace System {
template<typename T1>
struct ValueTuple_1;
}
namespace UnityEngine {
struct Vector3;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace System {
template<typename T1,typename T2,typename T3>
struct ValueTuple_3;
}
namespace System {
struct Int32Enum;
}
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
namespace UnityEngine::InputSystem::Utilities {
struct Substring;
}
// Forward declare root types
namespace System::Collections::Generic {
template<typename T>
class GenericComparer_1;
}
namespace System::Collections::Generic {
template<>
class GenericComparer_1<::System::DateTime>;
}
namespace System::Collections::Generic {
template<>
class GenericComparer_1<::System::DateTimeOffset>;
}
namespace System::Collections::Generic {
template<>
class GenericComparer_1<::System::Decimal>;
}
namespace System::Collections::Generic {
template<>
class GenericComparer_1<::System::Guid>;
}
namespace System::Collections::Generic {
template<>
class GenericComparer_1<::System::TimeSpan>;
}
namespace System::Collections::Generic {
template<>
class GenericComparer_1<::System::ValueTuple_1<bool>>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0>
class GenericComparer_1<::System::ValueTuple_2<T1_cordlgen_0,::UnityEngine::Vector3>>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1>
class GenericComparer_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
class GenericComparer_1<::System::ValueTuple_2<int32_t,T2_cordlgen_0>>;
}
namespace System::Collections::Generic {
template<::cordl_internals::is_or_is_backed_by<int32_t> T1_cordlgen_0,::cordl_internals::is_or_is_backed_by<int32_t> T2_cordlgen_1,::il2cpp_utils::il2cpp_reference_type T3_cordlgen_2>
class GenericComparer_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>;
}
namespace System::Collections::Generic {
template<>
class GenericComparer_1<::UnityEngine::InputSystem::Utilities::InternedString>;
}
namespace System::Collections::Generic {
template<>
class GenericComparer_1<::UnityEngine::InputSystem::Utilities::Substring>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type T>
class GenericComparer_1<T>;
}
namespace System::Collections::Generic {
template<>
class GenericComparer_1<bool>;
}
namespace System::Collections::Generic {
template<>
class GenericComparer_1<char16_t>;
}
namespace System::Collections::Generic {
template<>
class GenericComparer_1<double_t>;
}
namespace System::Collections::Generic {
template<>
class GenericComparer_1<float_t>;
}
namespace System::Collections::Generic {
template<>
class GenericComparer_1<int16_t>;
}
namespace System::Collections::Generic {
template<>
class GenericComparer_1<int32_t>;
}
namespace System::Collections::Generic {
template<>
class GenericComparer_1<int64_t>;
}
namespace System::Collections::Generic {
template<>
class GenericComparer_1<int8_t>;
}
namespace System::Collections::Generic {
template<>
class GenericComparer_1<uint16_t>;
}
namespace System::Collections::Generic {
template<>
class GenericComparer_1<uint32_t>;
}
namespace System::Collections::Generic {
template<>
class GenericComparer_1<uint64_t>;
}
namespace System::Collections::Generic {
template<>
class GenericComparer_1<uint8_t>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Collections::Generic::GenericComparer_1);
// Type: System.Collections.Generic::GenericComparer`1
// Type: System.Collections.Generic::GenericComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3866)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3865), inst: 1031 }), TypeDefinitionIndex(TypeDefinitionIndex(3865))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3866), inst: 6927 })
// CS Name: ::System.Collections.Generic::GenericComparer`1<T>*
class CORDL_TYPE GenericComparer_1<::System::ValueTuple_1<bool>> : public ::System::Collections::Generic::Comparer_1<::System::ValueTuple_1<bool>> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::Comparer_1<::System::ValueTuple_1<bool>>)]{};

/// @brief Method Compare addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t Compare(::System::ValueTuple_1<bool>  x, ::System::ValueTuple_1<bool>  y) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericComparer_1<::System::ValueTuple_1<bool>>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericComparer_1(GenericComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericComparer_1(GenericComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericComparer`1
namespace System::Collections::Generic {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> T1_cordlgen_0,::cordl_internals::is_or_is_backed_by<int32_t> T2_cordlgen_1,::il2cpp_utils::il2cpp_reference_type T3_cordlgen_2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3865)), TypeDefinitionIndex(TypeDefinitionIndex(3866)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3865), inst: 1031 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3866), inst: 6440 })
// CS Name: ::System.Collections.Generic::GenericComparer`1<T>*
class CORDL_TYPE GenericComparer_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>> : public ::System::Collections::Generic::Comparer_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::Comparer_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>)]{};

/// @brief Method Compare addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t Compare(::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>  x, ::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>  y) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericComparer_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericComparer_1(GenericComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericComparer_1(GenericComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericComparer`1
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3865), inst: 1031 }), TypeDefinitionIndex(TypeDefinitionIndex(3866)), TypeDefinitionIndex(TypeDefinitionIndex(3865))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3866), inst: 6439 })
// CS Name: ::System.Collections.Generic::GenericComparer`1<T>*
class CORDL_TYPE GenericComparer_1<::System::ValueTuple_2<T1_cordlgen_0,::UnityEngine::Vector3>> : public ::System::Collections::Generic::Comparer_1<::System::ValueTuple_2<T1_cordlgen_0,::UnityEngine::Vector3>> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::Comparer_1<::System::ValueTuple_2<T1_cordlgen_0,::UnityEngine::Vector3>>)]{};

/// @brief Method Compare addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t Compare(::System::ValueTuple_2<T1_cordlgen_0,::UnityEngine::Vector3>  x, ::System::ValueTuple_2<T1_cordlgen_0,::UnityEngine::Vector3>  y) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericComparer_1<::System::ValueTuple_2<T1_cordlgen_0,::UnityEngine::Vector3>>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericComparer_1(GenericComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericComparer_1(GenericComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericComparer`1
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3866)), TypeDefinitionIndex(TypeDefinitionIndex(3865)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3865), inst: 1031 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3866), inst: 6438 })
// CS Name: ::System.Collections.Generic::GenericComparer`1<T>*
class CORDL_TYPE GenericComparer_1<::System::ValueTuple_2<int32_t,T2_cordlgen_0>> : public ::System::Collections::Generic::Comparer_1<::System::ValueTuple_2<int32_t,T2_cordlgen_0>> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::Comparer_1<::System::ValueTuple_2<int32_t,T2_cordlgen_0>>)]{};

/// @brief Method Compare addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t Compare(::System::ValueTuple_2<int32_t,T2_cordlgen_0>  x, ::System::ValueTuple_2<int32_t,T2_cordlgen_0>  y) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericComparer_1<::System::ValueTuple_2<int32_t,T2_cordlgen_0>>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericComparer_1(GenericComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericComparer_1(GenericComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericComparer`1
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3866)), TypeDefinitionIndex(TypeDefinitionIndex(3865)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3865), inst: 1031 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3866), inst: 5059 })
// CS Name: ::System.Collections.Generic::GenericComparer`1<T>*
class CORDL_TYPE GenericComparer_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>> : public ::System::Collections::Generic::Comparer_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::Comparer_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>)]{};

/// @brief Method Compare addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t Compare(::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>  x, ::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>  y) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericComparer_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericComparer_1(GenericComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericComparer_1(GenericComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3865), inst: 1031 }), TypeDefinitionIndex(TypeDefinitionIndex(3866)), TypeDefinitionIndex(TypeDefinitionIndex(3865))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3866), inst: 2711 })
// CS Name: ::System.Collections.Generic::GenericComparer`1<T>*
class CORDL_TYPE GenericComparer_1<::System::TimeSpan> : public ::System::Collections::Generic::Comparer_1<::System::TimeSpan> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::Comparer_1<::System::TimeSpan>)]{};

/// @brief Method Compare addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t Compare(::System::TimeSpan  x, ::System::TimeSpan  y) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericComparer_1<::System::TimeSpan>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericComparer_1(GenericComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericComparer_1(GenericComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3865), inst: 1031 }), TypeDefinitionIndex(TypeDefinitionIndex(3865)), TypeDefinitionIndex(TypeDefinitionIndex(3866))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3866), inst: 2710 })
// CS Name: ::System.Collections.Generic::GenericComparer`1<T>*
class CORDL_TYPE GenericComparer_1<::UnityEngine::InputSystem::Utilities::Substring> : public ::System::Collections::Generic::Comparer_1<::UnityEngine::InputSystem::Utilities::Substring> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::Comparer_1<::UnityEngine::InputSystem::Utilities::Substring>)]{};

/// @brief Method Compare addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t Compare(::UnityEngine::InputSystem::Utilities::Substring  x, ::UnityEngine::InputSystem::Utilities::Substring  y) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericComparer_1<::UnityEngine::InputSystem::Utilities::Substring>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericComparer_1(GenericComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericComparer_1(GenericComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3865), inst: 1031 }), TypeDefinitionIndex(TypeDefinitionIndex(3866)), TypeDefinitionIndex(TypeDefinitionIndex(3865))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3866), inst: 2707 })
// CS Name: ::System.Collections.Generic::GenericComparer`1<T>*
class CORDL_TYPE GenericComparer_1<int8_t> : public ::System::Collections::Generic::Comparer_1<int8_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::Comparer_1<int8_t>)]{};

/// @brief Method Compare addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t Compare(int8_t  x, int8_t  y) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericComparer_1<int8_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericComparer_1(GenericComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericComparer_1(GenericComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3865)), TypeDefinitionIndex(TypeDefinitionIndex(3866)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3865), inst: 1031 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3866), inst: 2704 })
// CS Name: ::System.Collections.Generic::GenericComparer`1<T>*
class CORDL_TYPE GenericComparer_1<double_t> : public ::System::Collections::Generic::Comparer_1<double_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::Comparer_1<double_t>)]{};

/// @brief Method Compare addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t Compare(double_t  x, double_t  y) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericComparer_1<double_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericComparer_1(GenericComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericComparer_1(GenericComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3866)), TypeDefinitionIndex(TypeDefinitionIndex(3865)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3865), inst: 1031 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3866), inst: 2703 })
// CS Name: ::System.Collections.Generic::GenericComparer`1<T>*
class CORDL_TYPE GenericComparer_1<::System::Decimal> : public ::System::Collections::Generic::Comparer_1<::System::Decimal> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::Comparer_1<::System::Decimal>)]{};

/// @brief Method Compare addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t Compare(::System::Decimal  x, ::System::Decimal  y) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericComparer_1<::System::Decimal>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericComparer_1(GenericComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericComparer_1(GenericComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3865), inst: 1031 }), TypeDefinitionIndex(TypeDefinitionIndex(3865)), TypeDefinitionIndex(TypeDefinitionIndex(3866))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3866), inst: 2702 })
// CS Name: ::System.Collections.Generic::GenericComparer`1<T>*
class CORDL_TYPE GenericComparer_1<::System::DateTimeOffset> : public ::System::Collections::Generic::Comparer_1<::System::DateTimeOffset> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::Comparer_1<::System::DateTimeOffset>)]{};

/// @brief Method Compare addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t Compare(::System::DateTimeOffset  x, ::System::DateTimeOffset  y) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericComparer_1<::System::DateTimeOffset>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericComparer_1(GenericComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericComparer_1(GenericComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3865)), TypeDefinitionIndex(TypeDefinitionIndex(3866)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3865), inst: 1031 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3866), inst: 2701 })
// CS Name: ::System.Collections.Generic::GenericComparer`1<T>*
class CORDL_TYPE GenericComparer_1<::System::DateTime> : public ::System::Collections::Generic::Comparer_1<::System::DateTime> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::Comparer_1<::System::DateTime>)]{};

/// @brief Method Compare addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t Compare(::System::DateTime  x, ::System::DateTime  y) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericComparer_1<::System::DateTime>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericComparer_1(GenericComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericComparer_1(GenericComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3866)), TypeDefinitionIndex(TypeDefinitionIndex(3865)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3865), inst: 1031 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3866), inst: 2598 })
// CS Name: ::System.Collections.Generic::GenericComparer`1<T>*
class CORDL_TYPE GenericComparer_1<::UnityEngine::InputSystem::Utilities::InternedString> : public ::System::Collections::Generic::Comparer_1<::UnityEngine::InputSystem::Utilities::InternedString> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::Comparer_1<::UnityEngine::InputSystem::Utilities::InternedString>)]{};

/// @brief Method Compare addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t Compare(::UnityEngine::InputSystem::Utilities::InternedString  x, ::UnityEngine::InputSystem::Utilities::InternedString  y) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericComparer_1<::UnityEngine::InputSystem::Utilities::InternedString>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericComparer_1(GenericComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericComparer_1(GenericComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3866)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3865), inst: 1031 }), TypeDefinitionIndex(TypeDefinitionIndex(3865))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3866), inst: 753 })
// CS Name: ::System.Collections.Generic::GenericComparer`1<T>*
class CORDL_TYPE GenericComparer_1<uint32_t> : public ::System::Collections::Generic::Comparer_1<uint32_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::Comparer_1<uint32_t>)]{};

/// @brief Method Compare addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t Compare(uint32_t  x, uint32_t  y) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericComparer_1<uint32_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericComparer_1(GenericComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericComparer_1(GenericComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3866)), TypeDefinitionIndex(TypeDefinitionIndex(3865)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3865), inst: 1031 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3866), inst: 752 })
// CS Name: ::System.Collections.Generic::GenericComparer`1<T>*
class CORDL_TYPE GenericComparer_1<uint16_t> : public ::System::Collections::Generic::Comparer_1<uint16_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::Comparer_1<uint16_t>)]{};

/// @brief Method Compare addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t Compare(uint16_t  x, uint16_t  y) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericComparer_1<uint16_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericComparer_1(GenericComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericComparer_1(GenericComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3865)), TypeDefinitionIndex(TypeDefinitionIndex(3866)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3865), inst: 1031 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3866), inst: 745 })
// CS Name: ::System.Collections.Generic::GenericComparer`1<T>*
class CORDL_TYPE GenericComparer_1<int16_t> : public ::System::Collections::Generic::Comparer_1<int16_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::Comparer_1<int16_t>)]{};

/// @brief Method Compare addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t Compare(int16_t  x, int16_t  y) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericComparer_1<int16_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericComparer_1(GenericComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericComparer_1(GenericComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3865)), TypeDefinitionIndex(TypeDefinitionIndex(3866)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3865), inst: 1031 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3866), inst: 741 })
// CS Name: ::System.Collections.Generic::GenericComparer`1<T>*
class CORDL_TYPE GenericComparer_1<uint8_t> : public ::System::Collections::Generic::Comparer_1<uint8_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::Comparer_1<uint8_t>)]{};

/// @brief Method Compare addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t Compare(uint8_t  x, uint8_t  y) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericComparer_1<uint8_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericComparer_1(GenericComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericComparer_1(GenericComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3865), inst: 1031 }), TypeDefinitionIndex(TypeDefinitionIndex(3866)), TypeDefinitionIndex(TypeDefinitionIndex(3865))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3866), inst: 407 })
// CS Name: ::System.Collections.Generic::GenericComparer`1<T>*
class CORDL_TYPE GenericComparer_1<uint64_t> : public ::System::Collections::Generic::Comparer_1<uint64_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::Comparer_1<uint64_t>)]{};

/// @brief Method Compare addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t Compare(uint64_t  x, uint64_t  y) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericComparer_1<uint64_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericComparer_1(GenericComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericComparer_1(GenericComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3866)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3865), inst: 1031 }), TypeDefinitionIndex(TypeDefinitionIndex(3865))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3866), inst: 391 })
// CS Name: ::System.Collections.Generic::GenericComparer`1<T>*
class CORDL_TYPE GenericComparer_1<float_t> : public ::System::Collections::Generic::Comparer_1<float_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::Comparer_1<float_t>)]{};

/// @brief Method Compare addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t Compare(float_t  x, float_t  y) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericComparer_1<float_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericComparer_1(GenericComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericComparer_1(GenericComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3865)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3865), inst: 1031 }), TypeDefinitionIndex(TypeDefinitionIndex(3866))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3866), inst: 333 })
// CS Name: ::System.Collections.Generic::GenericComparer`1<T>*
class CORDL_TYPE GenericComparer_1<int64_t> : public ::System::Collections::Generic::Comparer_1<int64_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::Comparer_1<int64_t>)]{};

/// @brief Method Compare addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t Compare(int64_t  x, int64_t  y) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericComparer_1<int64_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericComparer_1(GenericComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericComparer_1(GenericComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3865)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3865), inst: 1031 }), TypeDefinitionIndex(TypeDefinitionIndex(3866))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3866), inst: 314 })
// CS Name: ::System.Collections.Generic::GenericComparer`1<T>*
class CORDL_TYPE GenericComparer_1<::System::Guid> : public ::System::Collections::Generic::Comparer_1<::System::Guid> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::Comparer_1<::System::Guid>)]{};

/// @brief Method Compare addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t Compare(::System::Guid  x, ::System::Guid  y) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericComparer_1<::System::Guid>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericComparer_1(GenericComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericComparer_1(GenericComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3866)), TypeDefinitionIndex(TypeDefinitionIndex(3865)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3865), inst: 1031 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3866), inst: 292 })
// CS Name: ::System.Collections.Generic::GenericComparer`1<T>*
class CORDL_TYPE GenericComparer_1<char16_t> : public ::System::Collections::Generic::Comparer_1<char16_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::Comparer_1<char16_t>)]{};

/// @brief Method Compare addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t Compare(char16_t  x, char16_t  y) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericComparer_1<char16_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericComparer_1(GenericComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericComparer_1(GenericComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3866)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3865), inst: 1031 }), TypeDefinitionIndex(TypeDefinitionIndex(3865))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3866), inst: 105 })
// CS Name: ::System.Collections.Generic::GenericComparer`1<T>*
class CORDL_TYPE GenericComparer_1<bool> : public ::System::Collections::Generic::Comparer_1<bool> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::Comparer_1<bool>)]{};

/// @brief Method Compare addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t Compare(bool  x, bool  y) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericComparer_1<bool>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericComparer_1(GenericComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericComparer_1(GenericComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3865), inst: 1031 }), TypeDefinitionIndex(TypeDefinitionIndex(3866)), TypeDefinitionIndex(TypeDefinitionIndex(3865))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3866), inst: 98 })
// CS Name: ::System.Collections.Generic::GenericComparer`1<T>*
class CORDL_TYPE GenericComparer_1<int32_t> : public ::System::Collections::Generic::Comparer_1<int32_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::Comparer_1<int32_t>)]{};

/// @brief Method Compare addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t Compare(int32_t  x, int32_t  y) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericComparer_1<int32_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericComparer_1(GenericComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericComparer_1(GenericComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericComparer`1
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3866)), TypeDefinitionIndex(TypeDefinitionIndex(3865)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3865), inst: 1031 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3866), inst: 2 })
// CS Name: ::System.Collections.Generic::GenericComparer`1<T>*
class CORDL_TYPE GenericComparer_1<T> : public ::System::Collections::Generic::Comparer_1<T> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::Comparer_1<T>)]{};

/// @brief Method Compare addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t Compare(T  x, T  y) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::Collections::Generic::GenericComparer_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericComparer_1(GenericComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericComparer_1(GenericComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::GenericComparer_1, "System.Collections.Generic", "GenericComparer`1");
