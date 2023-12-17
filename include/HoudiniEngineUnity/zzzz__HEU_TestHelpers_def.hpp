#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_TestHelpers)
namespace HoudiniEngineUnity {
template<typename T>
class IEquivable_1;
}
namespace HoudiniEngineUnity {
template<typename T>
class IEquivableWrapperClass_1;
}
namespace HoudiniEngineUnity {
template<typename T>
class __HEU_TestHelpers__RequireClass_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace HoudiniEngineUnity {
template<typename T>
class __HEU_TestHelpers__RequireStruct_1;
}
namespace UnityEngine {
class GameObject;
}
namespace HoudiniEngineUnity {
struct HAPI_AttributeInfo;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace HoudiniEngineUnity {
template<typename T>
class __HEU_TestHelpers__RequireClass_1;
}
namespace HoudiniEngineUnity {
template<typename T>
class __HEU_TestHelpers__RequireStruct_1;
}
namespace HoudiniEngineUnity {
class HEU_TestHelpers;
}
namespace HoudiniEngineUnity {
template<::il2cpp_utils::il2cpp_reference_type T>
class __HEU_TestHelpers__RequireClass_1<T>;
}
namespace HoudiniEngineUnity {
template<>
class __HEU_TestHelpers__RequireStruct_1<::HoudiniEngineUnity::HAPI_AttributeInfo>;
}
namespace HoudiniEngineUnity {
template<>
class __HEU_TestHelpers__RequireStruct_1<::UnityEngine::Color>;
}
namespace HoudiniEngineUnity {
template<>
class __HEU_TestHelpers__RequireStruct_1<::UnityEngine::Matrix4x4>;
}
namespace HoudiniEngineUnity {
template<>
class __HEU_TestHelpers__RequireStruct_1<::UnityEngine::Quaternion>;
}
namespace HoudiniEngineUnity {
template<>
class __HEU_TestHelpers__RequireStruct_1<::UnityEngine::Vector2>;
}
namespace HoudiniEngineUnity {
template<>
class __HEU_TestHelpers__RequireStruct_1<::UnityEngine::Vector3>;
}
namespace HoudiniEngineUnity {
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
class __HEU_TestHelpers__RequireStruct_1<T>;
}
namespace HoudiniEngineUnity {
template<>
class __HEU_TestHelpers__RequireStruct_1<bool>;
}
namespace HoudiniEngineUnity {
template<>
class __HEU_TestHelpers__RequireStruct_1<float_t>;
}
namespace HoudiniEngineUnity {
template<>
class __HEU_TestHelpers__RequireStruct_1<int32_t>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::HoudiniEngineUnity::__HEU_TestHelpers__RequireClass_1);
MARK_GEN_REF_PTR_T(::HoudiniEngineUnity::__HEU_TestHelpers__RequireStruct_1);
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_TestHelpers);
// Type: ::RequireStruct`1
// Type: ::RequireClass`1
// Type: HoudiniEngineUnity::HEU_TestHelpers
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9887))
// CS Name: ::HoudiniEngineUnity::HEU_TestHelpers*
class CORDL_TYPE HEU_TestHelpers : public ::System::Object {
public:
// Declarations
template<typename T>
using RequireClass_1 = ::HoudiniEngineUnity::__HEU_TestHelpers__RequireClass_1<T>;

template<typename T>
using RequireStruct_1 = ::HoudiniEngineUnity::__HEU_TestHelpers__RequireStruct_1<T>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method AssertTrueLogEquivalent addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline bool AssertTrueLogEquivalent(T  a, T  b, ByRef<bool>  result, ::StringW  header, ::StringW  subject, ::StringW  optional1, ::StringW  optional2, ::StringW  optional3, ::HoudiniEngineUnity::__HEU_TestHelpers__RequireStruct_1<T>*  _) ;

/// @brief Method AssertTrueLogEquivalent addr 0x21e13ac size 0x114 virtual false final false
static inline bool AssertTrueLogEquivalent(::UnityEngine::GameObject*  a, ::UnityEngine::GameObject*  b, ByRef<bool>  result, ::StringW  header, ::StringW  subject, ::StringW  optional1, ::StringW  optional2, ::StringW  optional3) ;

/// @brief Method AssertTrueLogEquivalent addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline bool AssertTrueLogEquivalent(::HoudiniEngineUnity::IEquivable_1<T>*  a, ::HoudiniEngineUnity::IEquivable_1<T>*  b, ByRef<bool>  result, ::StringW  header, ::StringW  subject, ::StringW  optional1, ::StringW  optional2, ::StringW  optional3) ;

/// @brief Method AssertTrueLogEquivalent addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline bool AssertTrueLogEquivalent(::HoudiniEngineUnity::IEquivableWrapperClass_1<T>*  a, ::HoudiniEngineUnity::IEquivableWrapperClass_1<T>*  b, ByRef<bool>  result, ::StringW  header, ::StringW  subject, ::StringW  optional1, ::StringW  optional2, ::StringW  optional3) ;

/// @brief Method AssertTrueLogEquivalent addr 0x21e2030 size 0x9c virtual false final false
static inline bool AssertTrueLogEquivalent(::StringW  a, ::StringW  b, ByRef<bool>  result, ::StringW  header, ::StringW  subject, ::StringW  optional1, ::StringW  optional2, ::StringW  optional3) ;

/// @brief Method AssertTrueLogEquivalent addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline bool AssertTrueLogEquivalent(::System::Collections::Generic::List_1<T>*  a, ::System::Collections::Generic::List_1<T>*  b, ByRef<bool>  result, ::StringW  header, ::StringW  subject, ::StringW  optional1, ::StringW  optional2, ::StringW  optional3, ::HoudiniEngineUnity::__HEU_TestHelpers__RequireStruct_1<T>*  _) ;

/// @brief Method AssertTrueLogEquivalent addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline bool AssertTrueLogEquivalent(::System::Collections::Generic::List_1<T>*  a, ::System::Collections::Generic::List_1<T>*  b, ByRef<bool>  result, ::StringW  header, ::StringW  subject, ::StringW  optional1, ::StringW  optional2, ::StringW  optional3, ::HoudiniEngineUnity::__HEU_TestHelpers__RequireClass_1<T>*  _) ;

/// @brief Method AssertTrueLogEquivalent addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline bool AssertTrueLogEquivalent(::System::Collections::Generic::List_1<::HoudiniEngineUnity::IEquivable_1<T>*>*  a, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::IEquivable_1<T>*>*  b, ByRef<bool>  result, ::StringW  header, ::StringW  subject, ::StringW  optional1, ::StringW  optional2, ::StringW  optional3) ;

/// @brief Method AssertTrueLogEquivalent addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline bool AssertTrueLogEquivalent(::System::Collections::Generic::List_1<::HoudiniEngineUnity::IEquivableWrapperClass_1<T>*>*  a, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::IEquivableWrapperClass_1<T>*>*  b, ByRef<bool>  result, ::StringW  header, ::StringW  subject, ::StringW  optional1, ::StringW  optional2, ::StringW  optional3) ;

/// @brief Method AssertTrueLogEquivalent addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline bool AssertTrueLogEquivalent(::ArrayW<T,::Array<T>*>  a, ::ArrayW<T,::Array<T>*>  b, ByRef<bool>  result, ::StringW  header, ::StringW  subject, ::StringW  optional1, ::StringW  optional2, ::StringW  optional3) ;

/// @brief Method AssertTrueLogEquivalent addr 0x21e2120 size 0x140 virtual false final false
static inline bool AssertTrueLogEquivalent(::ArrayW<::StringW,::Array<::StringW>*>  a, ::ArrayW<::StringW,::Array<::StringW>*>  b, ByRef<bool>  result, ::StringW  header, ::StringW  subject, ::StringW  optional1, ::StringW  optional2, ::StringW  optional3) ;

/// @brief Method AssertTrueLogEquivalent addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline bool AssertTrueLogEquivalent(::ArrayW<::HoudiniEngineUnity::IEquivable_1<T>*,::Array<::HoudiniEngineUnity::IEquivable_1<T>*>*>  a, ::ArrayW<::HoudiniEngineUnity::IEquivable_1<T>*,::Array<::HoudiniEngineUnity::IEquivable_1<T>*>*>  b, ByRef<bool>  result, ::StringW  header, ::StringW  subject, ::StringW  optional1, ::StringW  optional2, ::StringW  optional3) ;

/// @brief Method AssertTrueLogEquivalent addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline bool AssertTrueLogEquivalent(::ArrayW<::HoudiniEngineUnity::IEquivableWrapperClass_1<T>*,::Array<::HoudiniEngineUnity::IEquivableWrapperClass_1<T>*>*>  a, ::ArrayW<::HoudiniEngineUnity::IEquivableWrapperClass_1<T>*,::Array<::HoudiniEngineUnity::IEquivableWrapperClass_1<T>*>*>  b, ByRef<bool>  result, ::StringW  header, ::StringW  subject, ::StringW  optional1, ::StringW  optional2, ::StringW  optional3) ;

/// @brief Method PrintTestLogAndSetResult addr 0x21e1ed0 size 0x160 virtual false final false
static inline void PrintTestLogAndSetResult(bool  expression, ByRef<bool>  result, ::StringW  header, ::StringW  subject, ::StringW  optional1, ::StringW  optional2, ::StringW  optional3) ;

/// @brief Method ShouldBeTested addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline bool ShouldBeTested(T  a, T  b, ByRef<bool>  bResult, ::StringW  header, ::StringW  subject) ;

/// @brief Method ShouldBeTested addr 0x21e14c0 size 0x35c virtual false final false
static inline bool ShouldBeTested(::UnityEngine::GameObject*  a, ::UnityEngine::GameObject*  b, ByRef<bool>  bResult, ::StringW  header, ::StringW  subject) ;

/// @brief Method ShouldBeTested addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline bool ShouldBeTested(::HoudiniEngineUnity::IEquivable_1<T>*  a, ::HoudiniEngineUnity::IEquivable_1<T>*  b, ByRef<bool>  bResult, ::StringW  header, ::StringW  subject) ;

/// @brief Method ShouldBeTested addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline bool ShouldBeTested(::HoudiniEngineUnity::IEquivableWrapperClass_1<T>*  a, ::HoudiniEngineUnity::IEquivableWrapperClass_1<T>*  b, ByRef<bool>  bResult, ::StringW  header, ::StringW  subject) ;

/// @brief Method ShouldBeTested addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline bool ShouldBeTested(::System::Collections::Generic::List_1<T>*  a, ::System::Collections::Generic::List_1<T>*  b, ByRef<bool>  bResult, ::StringW  header, ::StringW  subject) ;

/// @brief Method ShouldBeTested addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline bool ShouldBeTested(::ArrayW<T,::Array<T>*>  a, ::ArrayW<T,::Array<T>*>  b, ByRef<bool>  bResult, ::StringW  header, ::StringW  subject) ;

/// @brief Method ShouldBeTested addr 0x21e20cc size 0x54 virtual false final false
static inline bool ShouldBeTested(::StringW  a, ::StringW  b, ByRef<bool>  bResult, ::StringW  header, ::StringW  subject) ;

/// @brief Method TestOutputObjectEquivalence addr 0x21e181c size 0x6b4 virtual false final false
static inline bool TestOutputObjectEquivalence(::UnityEngine::GameObject*  a, ::UnityEngine::GameObject*  b) ;

static inline ::HoudiniEngineUnity::HEU_TestHelpers* New_ctor() ;

/// @brief Method .ctor addr 0x21e24b8 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "HEU_TestHelpers", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HEU_TestHelpers(HEU_TestHelpers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HEU_TestHelpers", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HEU_TestHelpers(HEU_TestHelpers const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HEU_TestHelpers()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_TestHelpers, 0x10>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
// Type: ::RequireStruct`1
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(9885))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9885), inst: 7256 })
// CS Name: ::HEU_TestHelpers::RequireStruct`1<T>*
class CORDL_TYPE __HEU_TestHelpers__RequireStruct_1<::HoudiniEngineUnity::HAPI_AttributeInfo> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline ::HoudiniEngineUnity::__HEU_TestHelpers__RequireStruct_1<::HoudiniEngineUnity::HAPI_AttributeInfo>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_TestHelpers__RequireStruct_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HEU_TestHelpers__RequireStruct_1(__HEU_TestHelpers__RequireStruct_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_TestHelpers__RequireStruct_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HEU_TestHelpers__RequireStruct_1(__HEU_TestHelpers__RequireStruct_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HEU_TestHelpers__RequireStruct_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::RequireStruct`1
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9885)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9885), inst: 3342 })
// CS Name: ::HEU_TestHelpers::RequireStruct`1<T>*
class CORDL_TYPE __HEU_TestHelpers__RequireStruct_1<::UnityEngine::Quaternion> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline ::HoudiniEngineUnity::__HEU_TestHelpers__RequireStruct_1<::UnityEngine::Quaternion>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_TestHelpers__RequireStruct_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HEU_TestHelpers__RequireStruct_1(__HEU_TestHelpers__RequireStruct_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_TestHelpers__RequireStruct_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HEU_TestHelpers__RequireStruct_1(__HEU_TestHelpers__RequireStruct_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HEU_TestHelpers__RequireStruct_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::RequireStruct`1
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(9885))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9885), inst: 3316 })
// CS Name: ::HEU_TestHelpers::RequireStruct`1<T>*
class CORDL_TYPE __HEU_TestHelpers__RequireStruct_1<::UnityEngine::Matrix4x4> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline ::HoudiniEngineUnity::__HEU_TestHelpers__RequireStruct_1<::UnityEngine::Matrix4x4>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_TestHelpers__RequireStruct_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HEU_TestHelpers__RequireStruct_1(__HEU_TestHelpers__RequireStruct_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_TestHelpers__RequireStruct_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HEU_TestHelpers__RequireStruct_1(__HEU_TestHelpers__RequireStruct_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HEU_TestHelpers__RequireStruct_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::RequireStruct`1
namespace HoudiniEngineUnity {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(9885))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9885), inst: 974 })
// CS Name: ::HEU_TestHelpers::RequireStruct`1<T>*
class CORDL_TYPE __HEU_TestHelpers__RequireStruct_1<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline ::HoudiniEngineUnity::__HEU_TestHelpers__RequireStruct_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_TestHelpers__RequireStruct_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HEU_TestHelpers__RequireStruct_1(__HEU_TestHelpers__RequireStruct_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_TestHelpers__RequireStruct_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HEU_TestHelpers__RequireStruct_1(__HEU_TestHelpers__RequireStruct_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HEU_TestHelpers__RequireStruct_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::RequireStruct`1
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(9885))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9885), inst: 412 })
// CS Name: ::HEU_TestHelpers::RequireStruct`1<T>*
class CORDL_TYPE __HEU_TestHelpers__RequireStruct_1<::UnityEngine::Vector3> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline ::HoudiniEngineUnity::__HEU_TestHelpers__RequireStruct_1<::UnityEngine::Vector3>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_TestHelpers__RequireStruct_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HEU_TestHelpers__RequireStruct_1(__HEU_TestHelpers__RequireStruct_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_TestHelpers__RequireStruct_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HEU_TestHelpers__RequireStruct_1(__HEU_TestHelpers__RequireStruct_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HEU_TestHelpers__RequireStruct_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::RequireStruct`1
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9885)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9885), inst: 411 })
// CS Name: ::HEU_TestHelpers::RequireStruct`1<T>*
class CORDL_TYPE __HEU_TestHelpers__RequireStruct_1<::UnityEngine::Vector2> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline ::HoudiniEngineUnity::__HEU_TestHelpers__RequireStruct_1<::UnityEngine::Vector2>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_TestHelpers__RequireStruct_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HEU_TestHelpers__RequireStruct_1(__HEU_TestHelpers__RequireStruct_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_TestHelpers__RequireStruct_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HEU_TestHelpers__RequireStruct_1(__HEU_TestHelpers__RequireStruct_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HEU_TestHelpers__RequireStruct_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::RequireStruct`1
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9885)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9885), inst: 391 })
// CS Name: ::HEU_TestHelpers::RequireStruct`1<T>*
class CORDL_TYPE __HEU_TestHelpers__RequireStruct_1<float_t> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline ::HoudiniEngineUnity::__HEU_TestHelpers__RequireStruct_1<float_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_TestHelpers__RequireStruct_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HEU_TestHelpers__RequireStruct_1(__HEU_TestHelpers__RequireStruct_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_TestHelpers__RequireStruct_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HEU_TestHelpers__RequireStruct_1(__HEU_TestHelpers__RequireStruct_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HEU_TestHelpers__RequireStruct_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::RequireStruct`1
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(9885))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9885), inst: 293 })
// CS Name: ::HEU_TestHelpers::RequireStruct`1<T>*
class CORDL_TYPE __HEU_TestHelpers__RequireStruct_1<::UnityEngine::Color> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline ::HoudiniEngineUnity::__HEU_TestHelpers__RequireStruct_1<::UnityEngine::Color>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_TestHelpers__RequireStruct_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HEU_TestHelpers__RequireStruct_1(__HEU_TestHelpers__RequireStruct_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_TestHelpers__RequireStruct_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HEU_TestHelpers__RequireStruct_1(__HEU_TestHelpers__RequireStruct_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HEU_TestHelpers__RequireStruct_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::RequireStruct`1
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(9885))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9885), inst: 105 })
// CS Name: ::HEU_TestHelpers::RequireStruct`1<T>*
class CORDL_TYPE __HEU_TestHelpers__RequireStruct_1<bool> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline ::HoudiniEngineUnity::__HEU_TestHelpers__RequireStruct_1<bool>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_TestHelpers__RequireStruct_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HEU_TestHelpers__RequireStruct_1(__HEU_TestHelpers__RequireStruct_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_TestHelpers__RequireStruct_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HEU_TestHelpers__RequireStruct_1(__HEU_TestHelpers__RequireStruct_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HEU_TestHelpers__RequireStruct_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::RequireStruct`1
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9885)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9885), inst: 98 })
// CS Name: ::HEU_TestHelpers::RequireStruct`1<T>*
class CORDL_TYPE __HEU_TestHelpers__RequireStruct_1<int32_t> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline ::HoudiniEngineUnity::__HEU_TestHelpers__RequireStruct_1<int32_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_TestHelpers__RequireStruct_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HEU_TestHelpers__RequireStruct_1(__HEU_TestHelpers__RequireStruct_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_TestHelpers__RequireStruct_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HEU_TestHelpers__RequireStruct_1(__HEU_TestHelpers__RequireStruct_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HEU_TestHelpers__RequireStruct_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::RequireClass`1
namespace HoudiniEngineUnity {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(9886))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9886), inst: 2 })
// CS Name: ::HEU_TestHelpers::RequireClass`1<T>*
class CORDL_TYPE __HEU_TestHelpers__RequireClass_1<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline ::HoudiniEngineUnity::__HEU_TestHelpers__RequireClass_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_TestHelpers__RequireClass_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HEU_TestHelpers__RequireClass_1(__HEU_TestHelpers__RequireClass_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_TestHelpers__RequireClass_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HEU_TestHelpers__RequireClass_1(__HEU_TestHelpers__RequireClass_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HEU_TestHelpers__RequireClass_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::HoudiniEngineUnity::__HEU_TestHelpers__RequireClass_1, "HoudiniEngineUnity", "HEU_TestHelpers/RequireClass`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::HoudiniEngineUnity::__HEU_TestHelpers__RequireStruct_1, "HoudiniEngineUnity", "HEU_TestHelpers/RequireStruct`1");
NEED_NO_BOX(::HoudiniEngineUnity::HEU_TestHelpers);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_TestHelpers*, "HoudiniEngineUnity", "HEU_TestHelpers");
