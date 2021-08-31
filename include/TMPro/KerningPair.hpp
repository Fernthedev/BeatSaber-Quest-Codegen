// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: TMPro.GlyphValueRecord_Legacy
#include "TMPro/GlyphValueRecord_Legacy.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x3D
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.KerningPair
  // [TokenAttribute] Offset: FFFFFFFF
  class KerningPair : public ::Il2CppObject {
    public:
    // [FormerlySerializedAsAttribute] Offset: 0xDF56C0
    // private System.UInt32 m_FirstGlyph
    // Size: 0x4
    // Offset: 0x10
    uint m_FirstGlyph;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private TMPro.GlyphValueRecord_Legacy m_FirstGlyphAdjustments
    // Size: 0x10
    // Offset: 0x14
    TMPro::GlyphValueRecord_Legacy m_FirstGlyphAdjustments;
    // Field size check
    static_assert(sizeof(TMPro::GlyphValueRecord_Legacy) == 0x10);
    // [FormerlySerializedAsAttribute] Offset: 0xDF571C
    // private System.UInt32 m_SecondGlyph
    // Size: 0x4
    // Offset: 0x24
    uint m_SecondGlyph;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private TMPro.GlyphValueRecord_Legacy m_SecondGlyphAdjustments
    // Size: 0x10
    // Offset: 0x28
    TMPro::GlyphValueRecord_Legacy m_SecondGlyphAdjustments;
    // Field size check
    static_assert(sizeof(TMPro::GlyphValueRecord_Legacy) == 0x10);
    // [FormerlySerializedAsAttribute] Offset: 0xDF5778
    // public System.Single xOffset
    // Size: 0x4
    // Offset: 0x38
    float xOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean m_IgnoreSpacingAdjustments
    // Size: 0x1
    // Offset: 0x3C
    bool m_IgnoreSpacingAdjustments;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: KerningPair
    KerningPair(uint m_FirstGlyph_ = {}, TMPro::GlyphValueRecord_Legacy m_FirstGlyphAdjustments_ = {}, uint m_SecondGlyph_ = {}, TMPro::GlyphValueRecord_Legacy m_SecondGlyphAdjustments_ = {}, float xOffset_ = {}, bool m_IgnoreSpacingAdjustments_ = {}) noexcept : m_FirstGlyph{m_FirstGlyph_}, m_FirstGlyphAdjustments{m_FirstGlyphAdjustments_}, m_SecondGlyph{m_SecondGlyph_}, m_SecondGlyphAdjustments{m_SecondGlyphAdjustments_}, xOffset{xOffset_}, m_IgnoreSpacingAdjustments{m_IgnoreSpacingAdjustments_} {}
    // Get static field: static TMPro.KerningPair empty
    static TMPro::KerningPair* _get_empty();
    // Set static field: static TMPro.KerningPair empty
    static void _set_empty(TMPro::KerningPair* value);
    // Get instance field reference: private System.UInt32 m_FirstGlyph
    uint& dyn_m_FirstGlyph();
    // Get instance field reference: private TMPro.GlyphValueRecord_Legacy m_FirstGlyphAdjustments
    TMPro::GlyphValueRecord_Legacy& dyn_m_FirstGlyphAdjustments();
    // Get instance field reference: private System.UInt32 m_SecondGlyph
    uint& dyn_m_SecondGlyph();
    // Get instance field reference: private TMPro.GlyphValueRecord_Legacy m_SecondGlyphAdjustments
    TMPro::GlyphValueRecord_Legacy& dyn_m_SecondGlyphAdjustments();
    // Get instance field reference: public System.Single xOffset
    float& dyn_xOffset();
    // Get instance field reference: private System.Boolean m_IgnoreSpacingAdjustments
    bool& dyn_m_IgnoreSpacingAdjustments();
    // public System.UInt32 get_firstGlyph()
    // Offset: 0x1114F04
    uint get_firstGlyph();
    // public System.Void set_firstGlyph(System.UInt32 value)
    // Offset: 0x1114F0C
    void set_firstGlyph(uint value);
    // public TMPro.GlyphValueRecord_Legacy get_firstGlyphAdjustments()
    // Offset: 0x1114F14
    TMPro::GlyphValueRecord_Legacy get_firstGlyphAdjustments();
    // public System.UInt32 get_secondGlyph()
    // Offset: 0x1114F20
    uint get_secondGlyph();
    // public System.Void set_secondGlyph(System.UInt32 value)
    // Offset: 0x1114F28
    void set_secondGlyph(uint value);
    // public TMPro.GlyphValueRecord_Legacy get_secondGlyphAdjustments()
    // Offset: 0x1114F30
    TMPro::GlyphValueRecord_Legacy get_secondGlyphAdjustments();
    // public System.Boolean get_ignoreSpacingAdjustments()
    // Offset: 0x1114F3C
    bool get_ignoreSpacingAdjustments();
    // public System.Void .ctor(System.UInt32 left, System.UInt32 right, System.Single offset)
    // Offset: 0x1114F74
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static KerningPair* New_ctor(uint left, uint right, float offset) {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::KerningPair::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<KerningPair*, creationType>(left, right, offset)));
    }
    // public System.Void .ctor(System.UInt32 firstGlyph, TMPro.GlyphValueRecord_Legacy firstGlyphAdjustments, System.UInt32 secondGlyph, TMPro.GlyphValueRecord_Legacy secondGlyphAdjustments)
    // Offset: 0x1114FC0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static KerningPair* New_ctor(uint firstGlyph, TMPro::GlyphValueRecord_Legacy firstGlyphAdjustments, uint secondGlyph, TMPro::GlyphValueRecord_Legacy secondGlyphAdjustments) {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::KerningPair::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<KerningPair*, creationType>(firstGlyph, firstGlyphAdjustments, secondGlyph, secondGlyphAdjustments)));
    }
    // static private System.Void .cctor()
    // Offset: 0x1115058
    static void _cctor();
    // System.Void ConvertLegacyKerningData()
    // Offset: 0x111504C
    void ConvertLegacyKerningData();
    // public System.Void .ctor()
    // Offset: 0x1114F44
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static KerningPair* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::KerningPair::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<KerningPair*, creationType>()));
    }
  }; // TMPro.KerningPair
  #pragma pack(pop)
  static check_size<sizeof(KerningPair), 60 + sizeof(bool)> __TMPro_KerningPairSizeCheck;
  static_assert(sizeof(KerningPair) == 0x3D);
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::KerningPair*, "TMPro", "KerningPair");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::KerningPair::get_firstGlyph
// Il2CppName: get_firstGlyph
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (TMPro::KerningPair::*)()>(&TMPro::KerningPair::get_firstGlyph)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::KerningPair*), "get_firstGlyph", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::KerningPair::set_firstGlyph
// Il2CppName: set_firstGlyph
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::KerningPair::*)(uint)>(&TMPro::KerningPair::set_firstGlyph)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::KerningPair*), "set_firstGlyph", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: TMPro::KerningPair::get_firstGlyphAdjustments
// Il2CppName: get_firstGlyphAdjustments
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TMPro::GlyphValueRecord_Legacy (TMPro::KerningPair::*)()>(&TMPro::KerningPair::get_firstGlyphAdjustments)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::KerningPair*), "get_firstGlyphAdjustments", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::KerningPair::get_secondGlyph
// Il2CppName: get_secondGlyph
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (TMPro::KerningPair::*)()>(&TMPro::KerningPair::get_secondGlyph)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::KerningPair*), "get_secondGlyph", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::KerningPair::set_secondGlyph
// Il2CppName: set_secondGlyph
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::KerningPair::*)(uint)>(&TMPro::KerningPair::set_secondGlyph)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::KerningPair*), "set_secondGlyph", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: TMPro::KerningPair::get_secondGlyphAdjustments
// Il2CppName: get_secondGlyphAdjustments
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TMPro::GlyphValueRecord_Legacy (TMPro::KerningPair::*)()>(&TMPro::KerningPair::get_secondGlyphAdjustments)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::KerningPair*), "get_secondGlyphAdjustments", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::KerningPair::get_ignoreSpacingAdjustments
// Il2CppName: get_ignoreSpacingAdjustments
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (TMPro::KerningPair::*)()>(&TMPro::KerningPair::get_ignoreSpacingAdjustments)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::KerningPair*), "get_ignoreSpacingAdjustments", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::KerningPair::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: TMPro::KerningPair::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: TMPro::KerningPair::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&TMPro::KerningPair::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::KerningPair*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::KerningPair::ConvertLegacyKerningData
// Il2CppName: ConvertLegacyKerningData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::KerningPair::*)()>(&TMPro::KerningPair::ConvertLegacyKerningData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::KerningPair*), "ConvertLegacyKerningData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::KerningPair::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
