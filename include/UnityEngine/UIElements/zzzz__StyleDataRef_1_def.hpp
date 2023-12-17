#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StyleDataRef_1)
namespace UnityEngine::UIElements {
struct InheritedData;
}
namespace UnityEngine::UIElements {
struct LayoutData;
}
namespace UnityEngine::UIElements {
struct RareData;
}
namespace UnityEngine::UIElements {
struct TransformData;
}
namespace UnityEngine::UIElements {
struct TransitionData;
}
namespace UnityEngine::UIElements {
struct VisualData;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
template<typename T>
class __StyleDataRef_1__RefCounted;
}
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template<typename T>
class __StyleDataRef_1__RefCounted;
}
namespace UnityEngine::UIElements {
template<>
class __StyleDataRef_1__RefCounted<::UnityEngine::UIElements::InheritedData>;
}
namespace UnityEngine::UIElements {
template<>
class __StyleDataRef_1__RefCounted<::UnityEngine::UIElements::LayoutData>;
}
namespace UnityEngine::UIElements {
template<>
class __StyleDataRef_1__RefCounted<::UnityEngine::UIElements::RareData>;
}
namespace UnityEngine::UIElements {
template<>
class __StyleDataRef_1__RefCounted<::UnityEngine::UIElements::TransformData>;
}
namespace UnityEngine::UIElements {
template<>
class __StyleDataRef_1__RefCounted<::UnityEngine::UIElements::TransitionData>;
}
namespace UnityEngine::UIElements {
template<>
class __StyleDataRef_1__RefCounted<::UnityEngine::UIElements::VisualData>;
}
namespace UnityEngine::UIElements {
template<typename T>
struct StyleDataRef_1;
}
namespace UnityEngine::UIElements {
template<>
struct StyleDataRef_1<::UnityEngine::UIElements::InheritedData>;
}
namespace UnityEngine::UIElements {
template<>
struct StyleDataRef_1<::UnityEngine::UIElements::LayoutData>;
}
namespace UnityEngine::UIElements {
template<>
struct StyleDataRef_1<::UnityEngine::UIElements::RareData>;
}
namespace UnityEngine::UIElements {
template<>
struct StyleDataRef_1<::UnityEngine::UIElements::TransformData>;
}
namespace UnityEngine::UIElements {
template<>
struct StyleDataRef_1<::UnityEngine::UIElements::TransitionData>;
}
namespace UnityEngine::UIElements {
template<>
struct StyleDataRef_1<::UnityEngine::UIElements::VisualData>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::__StyleDataRef_1__RefCounted);
MARK_GEN_VAL_T(::UnityEngine::UIElements::StyleDataRef_1);
// Type: ::RefCounted
// Type: UnityEngine.UIElements::StyleDataRef`1
// Type: ::RefCounted
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7314)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7314), inst: 3382 })
// CS Name: ::StyleDataRef`1::RefCounted<T>*
class CORDL_TYPE __StyleDataRef_1__RefCounted<::UnityEngine::UIElements::VisualData> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xb0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xb0 - sizeof(::System::Object)]{};

/// @brief Field m_RefCount offset 0x10
 __declspec(property(get=__get_m_RefCount, put=__set_m_RefCount)) int32_t  m_RefCount;

/// @brief Field m_Id offset 0x14
 __declspec(property(get=__get_m_Id, put=__set_m_Id)) uint32_t  m_Id;

/// @brief Field value offset 0x18
 __declspec(property(get=__get_value, put=__set_value)) ::UnityEngine::UIElements::VisualData  value;

 __declspec(property(get=get_refCount)) int32_t  refCount;

static inline void setStaticF_m_NextId(uint32_t  value) ;

static inline uint32_t getStaticF_m_NextId() ;

constexpr void __set_m_RefCount(int32_t  value) ;

constexpr int32_t& __get_m_RefCount() ;

constexpr int32_t const& __get_m_RefCount() const;

constexpr void __set_m_Id(uint32_t  value) ;

constexpr uint32_t& __get_m_Id() ;

constexpr uint32_t const& __get_m_Id() const;

constexpr void __set_value(::UnityEngine::UIElements::VisualData  value) ;

constexpr ::UnityEngine::UIElements::VisualData& __get_value() ;

constexpr ::UnityEngine::UIElements::VisualData const& __get_value() const;

/// @brief Method get_refCount addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_refCount() ;

static inline ::UnityEngine::UIElements::__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::VisualData>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method Acquire addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Acquire() ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Release() ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::UIElements::__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::VisualData>* Copy() ;

// Ctor Parameters [CppParam { name: "", ty: "__StyleDataRef_1__RefCounted", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StyleDataRef_1__RefCounted(__StyleDataRef_1__RefCounted && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StyleDataRef_1__RefCounted", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StyleDataRef_1__RefCounted(__StyleDataRef_1__RefCounted const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __StyleDataRef_1__RefCounted()  = default;
public:


// Fields

// Static field m_NextId


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::RefCounted
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7314)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7314), inst: 3371 })
// CS Name: ::StyleDataRef`1::RefCounted<T>*
class CORDL_TYPE __StyleDataRef_1__RefCounted<::UnityEngine::UIElements::TransitionData> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Object)]{};

/// @brief Field m_RefCount offset 0x10
 __declspec(property(get=__get_m_RefCount, put=__set_m_RefCount)) int32_t  m_RefCount;

/// @brief Field m_Id offset 0x14
 __declspec(property(get=__get_m_Id, put=__set_m_Id)) uint32_t  m_Id;

/// @brief Field value offset 0x18
 __declspec(property(get=__get_value, put=__set_value)) ::UnityEngine::UIElements::TransitionData  value;

 __declspec(property(get=get_refCount)) int32_t  refCount;

static inline void setStaticF_m_NextId(uint32_t  value) ;

static inline uint32_t getStaticF_m_NextId() ;

constexpr void __set_m_RefCount(int32_t  value) ;

constexpr int32_t& __get_m_RefCount() ;

constexpr int32_t const& __get_m_RefCount() const;

constexpr void __set_m_Id(uint32_t  value) ;

constexpr uint32_t& __get_m_Id() ;

constexpr uint32_t const& __get_m_Id() const;

constexpr void __set_value(::UnityEngine::UIElements::TransitionData  value) ;

constexpr ::UnityEngine::UIElements::TransitionData& __get_value() ;

constexpr ::UnityEngine::UIElements::TransitionData const& __get_value() const;

/// @brief Method get_refCount addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_refCount() ;

static inline ::UnityEngine::UIElements::__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::TransitionData>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method Acquire addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Acquire() ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Release() ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::UIElements::__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::TransitionData>* Copy() ;

// Ctor Parameters [CppParam { name: "", ty: "__StyleDataRef_1__RefCounted", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StyleDataRef_1__RefCounted(__StyleDataRef_1__RefCounted && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StyleDataRef_1__RefCounted", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StyleDataRef_1__RefCounted(__StyleDataRef_1__RefCounted const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __StyleDataRef_1__RefCounted()  = default;
public:


// Fields

// Static field m_NextId


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::RefCounted
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7314)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7314), inst: 3370 })
// CS Name: ::StyleDataRef`1::RefCounted<T>*
class CORDL_TYPE __StyleDataRef_1__RefCounted<::UnityEngine::UIElements::TransformData> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x70};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x70 - sizeof(::System::Object)]{};

/// @brief Field m_RefCount offset 0x10
 __declspec(property(get=__get_m_RefCount, put=__set_m_RefCount)) int32_t  m_RefCount;

/// @brief Field m_Id offset 0x14
 __declspec(property(get=__get_m_Id, put=__set_m_Id)) uint32_t  m_Id;

/// @brief Field value offset 0x18
 __declspec(property(get=__get_value, put=__set_value)) ::UnityEngine::UIElements::TransformData  value;

 __declspec(property(get=get_refCount)) int32_t  refCount;

static inline void setStaticF_m_NextId(uint32_t  value) ;

static inline uint32_t getStaticF_m_NextId() ;

constexpr void __set_m_RefCount(int32_t  value) ;

constexpr int32_t& __get_m_RefCount() ;

constexpr int32_t const& __get_m_RefCount() const;

constexpr void __set_m_Id(uint32_t  value) ;

constexpr uint32_t& __get_m_Id() ;

constexpr uint32_t const& __get_m_Id() const;

constexpr void __set_value(::UnityEngine::UIElements::TransformData  value) ;

constexpr ::UnityEngine::UIElements::TransformData& __get_value() ;

constexpr ::UnityEngine::UIElements::TransformData const& __get_value() const;

/// @brief Method get_refCount addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_refCount() ;

static inline ::UnityEngine::UIElements::__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::TransformData>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method Acquire addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Acquire() ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Release() ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::UIElements::__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::TransformData>* Copy() ;

// Ctor Parameters [CppParam { name: "", ty: "__StyleDataRef_1__RefCounted", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StyleDataRef_1__RefCounted(__StyleDataRef_1__RefCounted && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StyleDataRef_1__RefCounted", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StyleDataRef_1__RefCounted(__StyleDataRef_1__RefCounted const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __StyleDataRef_1__RefCounted()  = default;
public:


// Fields

// Static field m_NextId


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::RefCounted
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7314)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7314), inst: 3344 })
// CS Name: ::StyleDataRef`1::RefCounted<T>*
class CORDL_TYPE __StyleDataRef_1__RefCounted<::UnityEngine::UIElements::RareData> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x60};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x60 - sizeof(::System::Object)]{};

/// @brief Field m_RefCount offset 0x10
 __declspec(property(get=__get_m_RefCount, put=__set_m_RefCount)) int32_t  m_RefCount;

/// @brief Field m_Id offset 0x14
 __declspec(property(get=__get_m_Id, put=__set_m_Id)) uint32_t  m_Id;

/// @brief Field value offset 0x18
 __declspec(property(get=__get_value, put=__set_value)) ::UnityEngine::UIElements::RareData  value;

 __declspec(property(get=get_refCount)) int32_t  refCount;

static inline void setStaticF_m_NextId(uint32_t  value) ;

static inline uint32_t getStaticF_m_NextId() ;

constexpr void __set_m_RefCount(int32_t  value) ;

constexpr int32_t& __get_m_RefCount() ;

constexpr int32_t const& __get_m_RefCount() const;

constexpr void __set_m_Id(uint32_t  value) ;

constexpr uint32_t& __get_m_Id() ;

constexpr uint32_t const& __get_m_Id() const;

constexpr void __set_value(::UnityEngine::UIElements::RareData  value) ;

constexpr ::UnityEngine::UIElements::RareData& __get_value() ;

constexpr ::UnityEngine::UIElements::RareData const& __get_value() const;

/// @brief Method get_refCount addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_refCount() ;

static inline ::UnityEngine::UIElements::__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::RareData>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method Acquire addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Acquire() ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Release() ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::UIElements::__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::RareData>* Copy() ;

// Ctor Parameters [CppParam { name: "", ty: "__StyleDataRef_1__RefCounted", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StyleDataRef_1__RefCounted(__StyleDataRef_1__RefCounted && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StyleDataRef_1__RefCounted", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StyleDataRef_1__RefCounted(__StyleDataRef_1__RefCounted const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __StyleDataRef_1__RefCounted()  = default;
public:


// Fields

// Static field m_NextId


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::RefCounted
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7314)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7314), inst: 3310 })
// CS Name: ::StyleDataRef`1::RefCounted<T>*
class CORDL_TYPE __StyleDataRef_1__RefCounted<::UnityEngine::UIElements::LayoutData> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xe8};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xe8 - sizeof(::System::Object)]{};

/// @brief Field m_RefCount offset 0x10
 __declspec(property(get=__get_m_RefCount, put=__set_m_RefCount)) int32_t  m_RefCount;

/// @brief Field m_Id offset 0x14
 __declspec(property(get=__get_m_Id, put=__set_m_Id)) uint32_t  m_Id;

/// @brief Field value offset 0x18
 __declspec(property(get=__get_value, put=__set_value)) ::UnityEngine::UIElements::LayoutData  value;

 __declspec(property(get=get_refCount)) int32_t  refCount;

static inline void setStaticF_m_NextId(uint32_t  value) ;

static inline uint32_t getStaticF_m_NextId() ;

constexpr void __set_m_RefCount(int32_t  value) ;

constexpr int32_t& __get_m_RefCount() ;

constexpr int32_t const& __get_m_RefCount() const;

constexpr void __set_m_Id(uint32_t  value) ;

constexpr uint32_t& __get_m_Id() ;

constexpr uint32_t const& __get_m_Id() const;

constexpr void __set_value(::UnityEngine::UIElements::LayoutData  value) ;

constexpr ::UnityEngine::UIElements::LayoutData& __get_value() ;

constexpr ::UnityEngine::UIElements::LayoutData const& __get_value() const;

/// @brief Method get_refCount addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_refCount() ;

static inline ::UnityEngine::UIElements::__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::LayoutData>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method Acquire addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Acquire() ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Release() ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::UIElements::__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::LayoutData>* Copy() ;

// Ctor Parameters [CppParam { name: "", ty: "__StyleDataRef_1__RefCounted", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StyleDataRef_1__RefCounted(__StyleDataRef_1__RefCounted && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StyleDataRef_1__RefCounted", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StyleDataRef_1__RefCounted(__StyleDataRef_1__RefCounted const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __StyleDataRef_1__RefCounted()  = default;
public:


// Fields

// Static field m_NextId


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::RefCounted
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(7314))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7314), inst: 3298 })
// CS Name: ::StyleDataRef`1::RefCounted<T>*
class CORDL_TYPE __StyleDataRef_1__RefCounted<::UnityEngine::UIElements::InheritedData> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xa8};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xa8 - sizeof(::System::Object)]{};

/// @brief Field m_RefCount offset 0x10
 __declspec(property(get=__get_m_RefCount, put=__set_m_RefCount)) int32_t  m_RefCount;

/// @brief Field m_Id offset 0x14
 __declspec(property(get=__get_m_Id, put=__set_m_Id)) uint32_t  m_Id;

/// @brief Field value offset 0x18
 __declspec(property(get=__get_value, put=__set_value)) ::UnityEngine::UIElements::InheritedData  value;

 __declspec(property(get=get_refCount)) int32_t  refCount;

static inline void setStaticF_m_NextId(uint32_t  value) ;

static inline uint32_t getStaticF_m_NextId() ;

constexpr void __set_m_RefCount(int32_t  value) ;

constexpr int32_t& __get_m_RefCount() ;

constexpr int32_t const& __get_m_RefCount() const;

constexpr void __set_m_Id(uint32_t  value) ;

constexpr uint32_t& __get_m_Id() ;

constexpr uint32_t const& __get_m_Id() const;

constexpr void __set_value(::UnityEngine::UIElements::InheritedData  value) ;

constexpr ::UnityEngine::UIElements::InheritedData& __get_value() ;

constexpr ::UnityEngine::UIElements::InheritedData const& __get_value() const;

/// @brief Method get_refCount addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_refCount() ;

static inline ::UnityEngine::UIElements::__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::InheritedData>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method Acquire addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Acquire() ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Release() ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::UIElements::__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::InheritedData>* Copy() ;

// Ctor Parameters [CppParam { name: "", ty: "__StyleDataRef_1__RefCounted", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StyleDataRef_1__RefCounted(__StyleDataRef_1__RefCounted && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StyleDataRef_1__RefCounted", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StyleDataRef_1__RefCounted(__StyleDataRef_1__RefCounted const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __StyleDataRef_1__RefCounted()  = default;
public:


// Fields

// Static field m_NextId


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::StyleDataRef`1
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7315))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7315), inst: 3382 })
// CS Name: ::UnityEngine.UIElements::StyleDataRef`1<T>
struct CORDL_TYPE StyleDataRef_1<::UnityEngine::UIElements::VisualData> : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
using RefCounted = ::UnityEngine::UIElements::__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::VisualData>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_Ref offset 0x0
 __declspec(property(get=__get_m_Ref, put=__set_m_Ref)) ::UnityEngine::UIElements::__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::VisualData>*  m_Ref;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::VisualData>>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::VisualData>>*() ;

constexpr void __set_m_Ref(::UnityEngine::UIElements::__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::VisualData>*  value) ;

constexpr ::UnityEngine::UIElements::__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::VisualData>* __get_m_Ref() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::VisualData>*> __get_m_Ref() const;

/// @brief Method Acquire addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::VisualData> Acquire() ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Release() ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyFrom(::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::VisualData>  other) ;

/// @brief Method Read addr 0x0 size 0xffffffffffffffff virtual false final false
inline ByRef<::UnityEngine::UIElements::VisualData> Read() ;

/// @brief Method Write addr 0x0 size 0xffffffffffffffff virtual false final false
inline ByRef<::UnityEngine::UIElements::VisualData> Write() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::VisualData> Create() ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method op_Equality addr 0x0 size 0xffffffffffffffff virtual false final false
static inline bool op_Equality(::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::VisualData>  lhs, ::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::VisualData>  rhs) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::VisualData>  other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

// Ctor Parameters [CppParam { name: "m_Ref", ty: "::UnityEngine::UIElements::__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::VisualData>*", modifiers: "", def_value: None }]
constexpr StyleDataRef_1(::UnityEngine::UIElements::__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::VisualData>*  m_Ref) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit StyleDataRef_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 StyleDataRef_1()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::StyleDataRef`1
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7315))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7315), inst: 3371 })
// CS Name: ::UnityEngine.UIElements::StyleDataRef`1<T>
struct CORDL_TYPE StyleDataRef_1<::UnityEngine::UIElements::TransitionData> : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
using RefCounted = ::UnityEngine::UIElements::__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::TransitionData>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_Ref offset 0x0
 __declspec(property(get=__get_m_Ref, put=__set_m_Ref)) ::UnityEngine::UIElements::__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::TransitionData>*  m_Ref;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::TransitionData>>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::TransitionData>>*() ;

constexpr void __set_m_Ref(::UnityEngine::UIElements::__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::TransitionData>*  value) ;

constexpr ::UnityEngine::UIElements::__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::TransitionData>* __get_m_Ref() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::TransitionData>*> __get_m_Ref() const;

/// @brief Method Acquire addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::TransitionData> Acquire() ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Release() ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyFrom(::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::TransitionData>  other) ;

/// @brief Method Read addr 0x0 size 0xffffffffffffffff virtual false final false
inline ByRef<::UnityEngine::UIElements::TransitionData> Read() ;

/// @brief Method Write addr 0x0 size 0xffffffffffffffff virtual false final false
inline ByRef<::UnityEngine::UIElements::TransitionData> Write() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::TransitionData> Create() ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method op_Equality addr 0x0 size 0xffffffffffffffff virtual false final false
static inline bool op_Equality(::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::TransitionData>  lhs, ::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::TransitionData>  rhs) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::TransitionData>  other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

// Ctor Parameters [CppParam { name: "m_Ref", ty: "::UnityEngine::UIElements::__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::TransitionData>*", modifiers: "", def_value: None }]
constexpr StyleDataRef_1(::UnityEngine::UIElements::__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::TransitionData>*  m_Ref) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit StyleDataRef_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 StyleDataRef_1()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::StyleDataRef`1
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7315))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7315), inst: 3370 })
// CS Name: ::UnityEngine.UIElements::StyleDataRef`1<T>
struct CORDL_TYPE StyleDataRef_1<::UnityEngine::UIElements::TransformData> : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
using RefCounted = ::UnityEngine::UIElements::__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::TransformData>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_Ref offset 0x0
 __declspec(property(get=__get_m_Ref, put=__set_m_Ref)) ::UnityEngine::UIElements::__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::TransformData>*  m_Ref;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::TransformData>>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::TransformData>>*() ;

constexpr void __set_m_Ref(::UnityEngine::UIElements::__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::TransformData>*  value) ;

constexpr ::UnityEngine::UIElements::__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::TransformData>* __get_m_Ref() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::TransformData>*> __get_m_Ref() const;

/// @brief Method Acquire addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::TransformData> Acquire() ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Release() ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyFrom(::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::TransformData>  other) ;

/// @brief Method Read addr 0x0 size 0xffffffffffffffff virtual false final false
inline ByRef<::UnityEngine::UIElements::TransformData> Read() ;

/// @brief Method Write addr 0x0 size 0xffffffffffffffff virtual false final false
inline ByRef<::UnityEngine::UIElements::TransformData> Write() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::TransformData> Create() ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method op_Equality addr 0x0 size 0xffffffffffffffff virtual false final false
static inline bool op_Equality(::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::TransformData>  lhs, ::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::TransformData>  rhs) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::TransformData>  other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

// Ctor Parameters [CppParam { name: "m_Ref", ty: "::UnityEngine::UIElements::__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::TransformData>*", modifiers: "", def_value: None }]
constexpr StyleDataRef_1(::UnityEngine::UIElements::__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::TransformData>*  m_Ref) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit StyleDataRef_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 StyleDataRef_1()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::StyleDataRef`1
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7315))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7315), inst: 3344 })
// CS Name: ::UnityEngine.UIElements::StyleDataRef`1<T>
struct CORDL_TYPE StyleDataRef_1<::UnityEngine::UIElements::RareData> : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
using RefCounted = ::UnityEngine::UIElements::__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::RareData>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_Ref offset 0x0
 __declspec(property(get=__get_m_Ref, put=__set_m_Ref)) ::UnityEngine::UIElements::__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::RareData>*  m_Ref;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::RareData>>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::RareData>>*() ;

constexpr void __set_m_Ref(::UnityEngine::UIElements::__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::RareData>*  value) ;

constexpr ::UnityEngine::UIElements::__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::RareData>* __get_m_Ref() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::RareData>*> __get_m_Ref() const;

/// @brief Method Acquire addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::RareData> Acquire() ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Release() ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyFrom(::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::RareData>  other) ;

/// @brief Method Read addr 0x0 size 0xffffffffffffffff virtual false final false
inline ByRef<::UnityEngine::UIElements::RareData> Read() ;

/// @brief Method Write addr 0x0 size 0xffffffffffffffff virtual false final false
inline ByRef<::UnityEngine::UIElements::RareData> Write() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::RareData> Create() ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method op_Equality addr 0x0 size 0xffffffffffffffff virtual false final false
static inline bool op_Equality(::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::RareData>  lhs, ::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::RareData>  rhs) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::RareData>  other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

// Ctor Parameters [CppParam { name: "m_Ref", ty: "::UnityEngine::UIElements::__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::RareData>*", modifiers: "", def_value: None }]
constexpr StyleDataRef_1(::UnityEngine::UIElements::__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::RareData>*  m_Ref) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit StyleDataRef_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 StyleDataRef_1()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::StyleDataRef`1
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7315))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7315), inst: 3310 })
// CS Name: ::UnityEngine.UIElements::StyleDataRef`1<T>
struct CORDL_TYPE StyleDataRef_1<::UnityEngine::UIElements::LayoutData> : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
using RefCounted = ::UnityEngine::UIElements::__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::LayoutData>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_Ref offset 0x0
 __declspec(property(get=__get_m_Ref, put=__set_m_Ref)) ::UnityEngine::UIElements::__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::LayoutData>*  m_Ref;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::LayoutData>>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::LayoutData>>*() ;

constexpr void __set_m_Ref(::UnityEngine::UIElements::__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::LayoutData>*  value) ;

constexpr ::UnityEngine::UIElements::__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::LayoutData>* __get_m_Ref() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::LayoutData>*> __get_m_Ref() const;

/// @brief Method Acquire addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::LayoutData> Acquire() ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Release() ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyFrom(::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::LayoutData>  other) ;

/// @brief Method Read addr 0x0 size 0xffffffffffffffff virtual false final false
inline ByRef<::UnityEngine::UIElements::LayoutData> Read() ;

/// @brief Method Write addr 0x0 size 0xffffffffffffffff virtual false final false
inline ByRef<::UnityEngine::UIElements::LayoutData> Write() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::LayoutData> Create() ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method op_Equality addr 0x0 size 0xffffffffffffffff virtual false final false
static inline bool op_Equality(::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::LayoutData>  lhs, ::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::LayoutData>  rhs) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::LayoutData>  other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

// Ctor Parameters [CppParam { name: "m_Ref", ty: "::UnityEngine::UIElements::__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::LayoutData>*", modifiers: "", def_value: None }]
constexpr StyleDataRef_1(::UnityEngine::UIElements::__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::LayoutData>*  m_Ref) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit StyleDataRef_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 StyleDataRef_1()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::StyleDataRef`1
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7315))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7315), inst: 3298 })
// CS Name: ::UnityEngine.UIElements::StyleDataRef`1<T>
struct CORDL_TYPE StyleDataRef_1<::UnityEngine::UIElements::InheritedData> : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
using RefCounted = ::UnityEngine::UIElements::__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::InheritedData>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_Ref offset 0x0
 __declspec(property(get=__get_m_Ref, put=__set_m_Ref)) ::UnityEngine::UIElements::__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::InheritedData>*  m_Ref;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::InheritedData>>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::InheritedData>>*() ;

constexpr void __set_m_Ref(::UnityEngine::UIElements::__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::InheritedData>*  value) ;

constexpr ::UnityEngine::UIElements::__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::InheritedData>* __get_m_Ref() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::InheritedData>*> __get_m_Ref() const;

/// @brief Method Acquire addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::InheritedData> Acquire() ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Release() ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyFrom(::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::InheritedData>  other) ;

/// @brief Method Read addr 0x0 size 0xffffffffffffffff virtual false final false
inline ByRef<::UnityEngine::UIElements::InheritedData> Read() ;

/// @brief Method Write addr 0x0 size 0xffffffffffffffff virtual false final false
inline ByRef<::UnityEngine::UIElements::InheritedData> Write() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::InheritedData> Create() ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method op_Equality addr 0x0 size 0xffffffffffffffff virtual false final false
static inline bool op_Equality(::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::InheritedData>  lhs, ::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::InheritedData>  rhs) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::InheritedData>  other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

// Ctor Parameters [CppParam { name: "m_Ref", ty: "::UnityEngine::UIElements::__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::InheritedData>*", modifiers: "", def_value: None }]
constexpr StyleDataRef_1(::UnityEngine::UIElements::__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::InheritedData>*  m_Ref) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit StyleDataRef_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 StyleDataRef_1()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::__StyleDataRef_1__RefCounted, "UnityEngine.UIElements", "StyleDataRef`1/RefCounted");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::UIElements::StyleDataRef_1, "UnityEngine.UIElements", "StyleDataRef`1");
