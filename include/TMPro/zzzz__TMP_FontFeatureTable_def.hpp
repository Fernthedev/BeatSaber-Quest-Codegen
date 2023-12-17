#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_FontFeatureTable)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace TMPro {
class TMP_GlyphPairAdjustmentRecord;
}
namespace TMPro {
class __TMP_FontFeatureTable____c;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace TMPro {
class TMP_FontFeatureTable;
}
namespace TMPro {
class __TMP_FontFeatureTable____c;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::TMP_FontFeatureTable);
MARK_REF_PTR_T(::TMPro::__TMP_FontFeatureTable____c);
// Type: ::<>c
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12376))
// CS Name: ::TMP_FontFeatureTable::<>c*
class CORDL_TYPE __TMP_FontFeatureTable____c : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::TMPro::__TMP_FontFeatureTable____c*  value) ;

static inline ::TMPro::__TMP_FontFeatureTable____c* getStaticF___9() ;

static inline void setStaticF___9__6_0(::System::Func_2<::TMPro::TMP_GlyphPairAdjustmentRecord*,uint32_t>*  value) ;

static inline ::System::Func_2<::TMPro::TMP_GlyphPairAdjustmentRecord*,uint32_t>* getStaticF___9__6_0() ;

static inline void setStaticF___9__6_1(::System::Func_2<::TMPro::TMP_GlyphPairAdjustmentRecord*,uint32_t>*  value) ;

static inline ::System::Func_2<::TMPro::TMP_GlyphPairAdjustmentRecord*,uint32_t>* getStaticF___9__6_1() ;

static inline ::TMPro::__TMP_FontFeatureTable____c* New_ctor() ;

/// @brief Method .ctor addr 0x2c12324 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <SortGlyphPairAdjustmentRecords>b__6_0 addr 0x2c1232c size 0x18 virtual false final false
inline uint32_t _SortGlyphPairAdjustmentRecords_b__6_0(::TMPro::TMP_GlyphPairAdjustmentRecord*  s) ;

/// @brief Method <SortGlyphPairAdjustmentRecords>b__6_1 addr 0x2c12344 size 0x18 virtual false final false
inline uint32_t _SortGlyphPairAdjustmentRecords_b__6_1(::TMPro::TMP_GlyphPairAdjustmentRecord*  s) ;

// Ctor Parameters [CppParam { name: "", ty: "__TMP_FontFeatureTable____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TMP_FontFeatureTable____c(__TMP_FontFeatureTable____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TMP_FontFeatureTable____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TMP_FontFeatureTable____c(__TMP_FontFeatureTable____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TMP_FontFeatureTable____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__6_0

// Static field <>9__6_1


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::__TMP_FontFeatureTable____c, 0x10>, "Size mismatch!");

} // namespace end def TMPro
// Type: TMPro::TMP_FontFeatureTable
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12377))
// CS Name: ::TMPro::TMP_FontFeatureTable*
class CORDL_TYPE TMP_FontFeatureTable : public ::System::Object {
public:
// Declarations
using __c = ::TMPro::__TMP_FontFeatureTable____c;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field m_GlyphPairAdjustmentRecords offset 0x10
 __declspec(property(get=__get_m_GlyphPairAdjustmentRecords, put=__set_m_GlyphPairAdjustmentRecords)) ::System::Collections::Generic::List_1<::TMPro::TMP_GlyphPairAdjustmentRecord*>*  m_GlyphPairAdjustmentRecords;

/// @brief Field m_GlyphPairAdjustmentRecordLookupDictionary offset 0x18
 __declspec(property(get=__get_m_GlyphPairAdjustmentRecordLookupDictionary, put=__set_m_GlyphPairAdjustmentRecordLookupDictionary)) ::System::Collections::Generic::Dictionary_2<uint32_t,::TMPro::TMP_GlyphPairAdjustmentRecord*>*  m_GlyphPairAdjustmentRecordLookupDictionary;

 __declspec(property(get=get_glyphPairAdjustmentRecords, put=set_glyphPairAdjustmentRecords)) ::System::Collections::Generic::List_1<::TMPro::TMP_GlyphPairAdjustmentRecord*>*  glyphPairAdjustmentRecords;

constexpr void __set_m_GlyphPairAdjustmentRecords(::System::Collections::Generic::List_1<::TMPro::TMP_GlyphPairAdjustmentRecord*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::TMPro::TMP_GlyphPairAdjustmentRecord*>* __get_m_GlyphPairAdjustmentRecords() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::TMPro::TMP_GlyphPairAdjustmentRecord*>*> __get_m_GlyphPairAdjustmentRecords() const;

constexpr void __set_m_GlyphPairAdjustmentRecordLookupDictionary(::System::Collections::Generic::Dictionary_2<uint32_t,::TMPro::TMP_GlyphPairAdjustmentRecord*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<uint32_t,::TMPro::TMP_GlyphPairAdjustmentRecord*>* __get_m_GlyphPairAdjustmentRecordLookupDictionary() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<uint32_t,::TMPro::TMP_GlyphPairAdjustmentRecord*>*> __get_m_GlyphPairAdjustmentRecordLookupDictionary() const;

/// @brief Method get_glyphPairAdjustmentRecords addr 0x2c122b0 size 0x8 virtual false final false
inline ::System::Collections::Generic::List_1<::TMPro::TMP_GlyphPairAdjustmentRecord*>* get_glyphPairAdjustmentRecords() ;

/// @brief Method set_glyphPairAdjustmentRecords addr 0x2c122b8 size 0x8 virtual false final false
inline void set_glyphPairAdjustmentRecords(::System::Collections::Generic::List_1<::TMPro::TMP_GlyphPairAdjustmentRecord*>*  value) ;

static inline ::TMPro::TMP_FontFeatureTable* New_ctor() ;

/// @brief Method .ctor addr 0x2c0ee5c size 0xc4 virtual false final false
inline void _ctor() ;

/// @brief Method SortGlyphPairAdjustmentRecords addr 0x2c0a1e8 size 0x1ec virtual false final false
inline void SortGlyphPairAdjustmentRecords() ;

// Ctor Parameters [CppParam { name: "", ty: "TMP_FontFeatureTable", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TMP_FontFeatureTable(TMP_FontFeatureTable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TMP_FontFeatureTable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TMP_FontFeatureTable(TMP_FontFeatureTable const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TMP_FontFeatureTable()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_FontFeatureTable, 0x20>, "Size mismatch!");

} // namespace end def TMPro
NEED_NO_BOX(::TMPro::TMP_FontFeatureTable);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_FontFeatureTable*, "TMPro", "TMP_FontFeatureTable");
NEED_NO_BOX(::TMPro::__TMP_FontFeatureTable____c);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::__TMP_FontFeatureTable____c*, "TMPro", "TMP_FontFeatureTable/<>c");
