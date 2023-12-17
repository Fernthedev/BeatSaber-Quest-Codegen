#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BloomFilterUtil)
namespace GlobalNamespace {
template<typename T>
class __BloomFilterUtil____c__DisplayClass1_0_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace GlobalNamespace {
template<typename T>
class __BloomFilterUtil____c__DisplayClass2_0_1;
}
namespace GlobalNamespace {
struct BitMask128;
}
namespace GlobalNamespace {
struct BitMask256;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class __BloomFilterUtil____c__DisplayClass1_0_1;
}
namespace GlobalNamespace {
template<typename T>
class __BloomFilterUtil____c__DisplayClass2_0_1;
}
namespace GlobalNamespace {
class BloomFilterUtil;
}
namespace GlobalNamespace {
template<>
class __BloomFilterUtil____c__DisplayClass1_0_1<::GlobalNamespace::BitMask128>;
}
namespace GlobalNamespace {
template<>
class __BloomFilterUtil____c__DisplayClass1_0_1<::GlobalNamespace::BitMask256>;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type T>
class __BloomFilterUtil____c__DisplayClass1_0_1<T>;
}
namespace GlobalNamespace {
template<>
class __BloomFilterUtil____c__DisplayClass2_0_1<::GlobalNamespace::BitMask128>;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type T>
class __BloomFilterUtil____c__DisplayClass2_0_1<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::__BloomFilterUtil____c__DisplayClass1_0_1);
MARK_GEN_REF_PTR_T(::GlobalNamespace::__BloomFilterUtil____c__DisplayClass2_0_1);
MARK_REF_PTR_T(::GlobalNamespace::BloomFilterUtil);
// Type: ::<>c__DisplayClass1_0`1
// Type: ::<>c__DisplayClass2_0`1
// Type: ::BloomFilterUtil
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14996))
// CS Name: ::BloomFilterUtil*
class CORDL_TYPE BloomFilterUtil : public ::System::Object {
public:
// Declarations
template<typename T>
using __c__DisplayClass2_0_1 = ::GlobalNamespace::__BloomFilterUtil____c__DisplayClass2_0_1<T>;

template<typename T>
using __c__DisplayClass1_0_1 = ::GlobalNamespace::__BloomFilterUtil____c__DisplayClass1_0_1<T>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method ToBloomFilter addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline T ToBloomFilter(::StringW  value, int32_t  hashCount, int32_t  hashBits) ;

/// @brief Method ToBloomFilter addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline T ToBloomFilter(::System::Collections::Generic::IEnumerable_1<::StringW>*  strings, int32_t  hashCount, int32_t  hashBits) ;

/// @brief Method ToBloomFilter addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline T ToBloomFilter(::System::Collections::Generic::IEnumerable_1<uint32_t>*  hashes, int32_t  hashCount, int32_t  hashBits) ;

/// @brief Method AddBloomFilterEntry addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline T AddBloomFilterEntry(T  bitMask, ::StringW  value, int32_t  hashCount, int32_t  hashBits) ;

/// @brief Method AddBloomFilterEntryHash addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline T AddBloomFilterEntryHash(T  bitMask, uint32_t  hash, int32_t  hashCount, int32_t  hashBits) ;

/// @brief Method ContainsBloomFilterEntry addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline bool ContainsBloomFilterEntry(T  bitMask, ::StringW  value, int32_t  hashCount, int32_t  hashBits) ;

/// @brief Method ContainsBloomFilterEntryHash addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline bool ContainsBloomFilterEntryHash(T  bitMask, uint32_t  hash, int32_t  hashCount, int32_t  hashBits) ;

// Ctor Parameters [CppParam { name: "", ty: "BloomFilterUtil", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BloomFilterUtil(BloomFilterUtil && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BloomFilterUtil", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BloomFilterUtil(BloomFilterUtil const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BloomFilterUtil()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomFilterUtil, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass1_0`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14994)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14994), inst: 2637 })
// CS Name: ::BloomFilterUtil::<>c__DisplayClass1_0`1<T>*
class CORDL_TYPE __BloomFilterUtil____c__DisplayClass1_0_1<::GlobalNamespace::BitMask256> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field hashCount offset 0x10
 __declspec(property(get=__get_hashCount, put=__set_hashCount)) int32_t  hashCount;

/// @brief Field hashBits offset 0x14
 __declspec(property(get=__get_hashBits, put=__set_hashBits)) int32_t  hashBits;

constexpr void __set_hashCount(int32_t  value) ;

constexpr int32_t& __get_hashCount() ;

constexpr int32_t const& __get_hashCount() const;

constexpr void __set_hashBits(int32_t  value) ;

constexpr int32_t& __get_hashBits() ;

constexpr int32_t const& __get_hashBits() const;

static inline ::GlobalNamespace::__BloomFilterUtil____c__DisplayClass1_0_1<::GlobalNamespace::BitMask256>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <ToBloomFilter>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::BitMask256 _ToBloomFilter_b__0(::GlobalNamespace::BitMask256  bloomFilter, ::StringW  str) ;

// Ctor Parameters [CppParam { name: "", ty: "__BloomFilterUtil____c__DisplayClass1_0_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__BloomFilterUtil____c__DisplayClass1_0_1(__BloomFilterUtil____c__DisplayClass1_0_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__BloomFilterUtil____c__DisplayClass1_0_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__BloomFilterUtil____c__DisplayClass1_0_1(__BloomFilterUtil____c__DisplayClass1_0_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __BloomFilterUtil____c__DisplayClass1_0_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass1_0`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14994)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14994), inst: 2636 })
// CS Name: ::BloomFilterUtil::<>c__DisplayClass1_0`1<T>*
class CORDL_TYPE __BloomFilterUtil____c__DisplayClass1_0_1<::GlobalNamespace::BitMask128> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field hashCount offset 0x10
 __declspec(property(get=__get_hashCount, put=__set_hashCount)) int32_t  hashCount;

/// @brief Field hashBits offset 0x14
 __declspec(property(get=__get_hashBits, put=__set_hashBits)) int32_t  hashBits;

constexpr void __set_hashCount(int32_t  value) ;

constexpr int32_t& __get_hashCount() ;

constexpr int32_t const& __get_hashCount() const;

constexpr void __set_hashBits(int32_t  value) ;

constexpr int32_t& __get_hashBits() ;

constexpr int32_t const& __get_hashBits() const;

static inline ::GlobalNamespace::__BloomFilterUtil____c__DisplayClass1_0_1<::GlobalNamespace::BitMask128>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <ToBloomFilter>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::BitMask128 _ToBloomFilter_b__0(::GlobalNamespace::BitMask128  bloomFilter, ::StringW  str) ;

// Ctor Parameters [CppParam { name: "", ty: "__BloomFilterUtil____c__DisplayClass1_0_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__BloomFilterUtil____c__DisplayClass1_0_1(__BloomFilterUtil____c__DisplayClass1_0_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__BloomFilterUtil____c__DisplayClass1_0_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__BloomFilterUtil____c__DisplayClass1_0_1(__BloomFilterUtil____c__DisplayClass1_0_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __BloomFilterUtil____c__DisplayClass1_0_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass1_0`1
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(14994))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14994), inst: 2 })
// CS Name: ::BloomFilterUtil::<>c__DisplayClass1_0`1<T>*
class CORDL_TYPE __BloomFilterUtil____c__DisplayClass1_0_1<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field hashCount offset 0x10
 __declspec(property(get=__get_hashCount, put=__set_hashCount)) int32_t  hashCount;

/// @brief Field hashBits offset 0x14
 __declspec(property(get=__get_hashBits, put=__set_hashBits)) int32_t  hashBits;

constexpr void __set_hashCount(int32_t  value) ;

constexpr int32_t& __get_hashCount() ;

constexpr int32_t const& __get_hashCount() const;

constexpr void __set_hashBits(int32_t  value) ;

constexpr int32_t& __get_hashBits() ;

constexpr int32_t const& __get_hashBits() const;

static inline ::GlobalNamespace::__BloomFilterUtil____c__DisplayClass1_0_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <ToBloomFilter>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline T _ToBloomFilter_b__0(T  bloomFilter, ::StringW  str) ;

// Ctor Parameters [CppParam { name: "", ty: "__BloomFilterUtil____c__DisplayClass1_0_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__BloomFilterUtil____c__DisplayClass1_0_1(__BloomFilterUtil____c__DisplayClass1_0_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__BloomFilterUtil____c__DisplayClass1_0_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__BloomFilterUtil____c__DisplayClass1_0_1(__BloomFilterUtil____c__DisplayClass1_0_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __BloomFilterUtil____c__DisplayClass1_0_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass2_0`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14995)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14995), inst: 2636 })
// CS Name: ::BloomFilterUtil::<>c__DisplayClass2_0`1<T>*
class CORDL_TYPE __BloomFilterUtil____c__DisplayClass2_0_1<::GlobalNamespace::BitMask128> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field hashCount offset 0x10
 __declspec(property(get=__get_hashCount, put=__set_hashCount)) int32_t  hashCount;

/// @brief Field hashBits offset 0x14
 __declspec(property(get=__get_hashBits, put=__set_hashBits)) int32_t  hashBits;

constexpr void __set_hashCount(int32_t  value) ;

constexpr int32_t& __get_hashCount() ;

constexpr int32_t const& __get_hashCount() const;

constexpr void __set_hashBits(int32_t  value) ;

constexpr int32_t& __get_hashBits() ;

constexpr int32_t const& __get_hashBits() const;

static inline ::GlobalNamespace::__BloomFilterUtil____c__DisplayClass2_0_1<::GlobalNamespace::BitMask128>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <ToBloomFilter>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::BitMask128 _ToBloomFilter_b__0(::GlobalNamespace::BitMask128  bloomFilter, uint32_t  hash) ;

// Ctor Parameters [CppParam { name: "", ty: "__BloomFilterUtil____c__DisplayClass2_0_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__BloomFilterUtil____c__DisplayClass2_0_1(__BloomFilterUtil____c__DisplayClass2_0_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__BloomFilterUtil____c__DisplayClass2_0_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__BloomFilterUtil____c__DisplayClass2_0_1(__BloomFilterUtil____c__DisplayClass2_0_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __BloomFilterUtil____c__DisplayClass2_0_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass2_0`1
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14995)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14995), inst: 2 })
// CS Name: ::BloomFilterUtil::<>c__DisplayClass2_0`1<T>*
class CORDL_TYPE __BloomFilterUtil____c__DisplayClass2_0_1<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field hashCount offset 0x10
 __declspec(property(get=__get_hashCount, put=__set_hashCount)) int32_t  hashCount;

/// @brief Field hashBits offset 0x14
 __declspec(property(get=__get_hashBits, put=__set_hashBits)) int32_t  hashBits;

constexpr void __set_hashCount(int32_t  value) ;

constexpr int32_t& __get_hashCount() ;

constexpr int32_t const& __get_hashCount() const;

constexpr void __set_hashBits(int32_t  value) ;

constexpr int32_t& __get_hashBits() ;

constexpr int32_t const& __get_hashBits() const;

static inline ::GlobalNamespace::__BloomFilterUtil____c__DisplayClass2_0_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <ToBloomFilter>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline T _ToBloomFilter_b__0(T  bloomFilter, uint32_t  hash) ;

// Ctor Parameters [CppParam { name: "", ty: "__BloomFilterUtil____c__DisplayClass2_0_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__BloomFilterUtil____c__DisplayClass2_0_1(__BloomFilterUtil____c__DisplayClass2_0_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__BloomFilterUtil____c__DisplayClass2_0_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__BloomFilterUtil____c__DisplayClass2_0_1(__BloomFilterUtil____c__DisplayClass2_0_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __BloomFilterUtil____c__DisplayClass2_0_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__BloomFilterUtil____c__DisplayClass1_0_1, "", "BloomFilterUtil/<>c__DisplayClass1_0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__BloomFilterUtil____c__DisplayClass2_0_1, "", "BloomFilterUtil/<>c__DisplayClass2_0`1");
NEED_NO_BOX(::GlobalNamespace::BloomFilterUtil);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomFilterUtil*, "", "BloomFilterUtil");
