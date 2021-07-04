// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.TableView
#include "HMUI/TableView.hpp"
// Including type: HMUI.TableView/IDataSource
#include "HMUI/TableView_IDataSource.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: TableCell
  class TableCell;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`3<T1, T2, T3>
  template<typename T1, typename T2, typename T3>
  class Action_3;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0xC8
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.SectionTableView
  class SectionTableView : public HMUI::TableView/*, public HMUI::TableView::IDataSource*/ {
    public:
    // Nested type: HMUI::SectionTableView::IDataSource
    class IDataSource;
    // Nested type: HMUI::SectionTableView::Section
    struct Section;
    // Size: 0xC
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: HMUI.SectionTableView/Section
    struct Section/*, public System::ValueType*/ {
      public:
      // public System.Boolean unfolded
      // Size: 0x1
      // Offset: 0x0
      bool unfolded;
      // Field size check
      static_assert(sizeof(bool) == 0x1);
      // Padding between fields: unfolded and: startBaseRow
      char __padding0[0x3] = {};
      // public System.Int32 startBaseRow
      // Size: 0x4
      // Offset: 0x4
      int startBaseRow;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // public System.Int32 numberOfBaseRows
      // Size: 0x4
      // Offset: 0x8
      int numberOfBaseRows;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: Section
      constexpr Section(bool unfolded_ = {}, int startBaseRow_ = {}, int numberOfBaseRows_ = {}) noexcept : unfolded{unfolded_}, startBaseRow{startBaseRow_}, numberOfBaseRows{numberOfBaseRows_} {}
      // Creating interface conversion operator: operator System::ValueType
      operator System::ValueType() noexcept {
        return *reinterpret_cast<System::ValueType*>(this);
      }
    }; // HMUI.SectionTableView/Section
    #pragma pack(pop)
    static check_size<sizeof(SectionTableView::Section), 8 + sizeof(int)> __HMUI_SectionTableView_SectionSizeCheck;
    static_assert(sizeof(SectionTableView::Section) == 0xC);
    // private System.Boolean _unfoldSectionsByDefault
    // Size: 0x1
    // Offset: 0xA2
    bool unfoldSectionsByDefault;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: unfoldSectionsByDefault and: didSelectRowInSectionEvent
    char __padding0[0x5] = {};
    // [CompilerGeneratedAttribute] Offset: 0xDF9CD0
    // private System.Action`3<HMUI.SectionTableView,System.Int32,System.Int32> didSelectRowInSectionEvent
    // Size: 0x8
    // Offset: 0xA8
    System::Action_3<HMUI::SectionTableView*, int, int>* didSelectRowInSectionEvent;
    // Field size check
    static_assert(sizeof(System::Action_3<HMUI::SectionTableView*, int, int>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDF9CE0
    // private System.Action`2<HMUI.SectionTableView,System.Int32> didSelectHeaderEvent
    // Size: 0x8
    // Offset: 0xB0
    System::Action_2<HMUI::SectionTableView*, int>* didSelectHeaderEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<HMUI::SectionTableView*, int>*) == 0x8);
    // private HMUI.SectionTableView/IDataSource _dataSource
    // Size: 0x8
    // Offset: 0xB8
    HMUI::SectionTableView::IDataSource* dataSource;
    // Field size check
    static_assert(sizeof(HMUI::SectionTableView::IDataSource*) == 0x8);
    // private HMUI.SectionTableView/Section[] _sections
    // Size: 0x8
    // Offset: 0xC0
    ::Array<HMUI::SectionTableView::Section>* sections;
    // Field size check
    static_assert(sizeof(::Array<HMUI::SectionTableView::Section>*) == 0x8);
    // Creating value type constructor for type: SectionTableView
    SectionTableView(bool unfoldSectionsByDefault_ = {}, System::Action_3<HMUI::SectionTableView*, int, int>* didSelectRowInSectionEvent_ = {}, System::Action_2<HMUI::SectionTableView*, int>* didSelectHeaderEvent_ = {}, HMUI::SectionTableView::IDataSource* dataSource_ = {}, ::Array<HMUI::SectionTableView::Section>* sections_ = {}) noexcept : unfoldSectionsByDefault{unfoldSectionsByDefault_}, didSelectRowInSectionEvent{didSelectRowInSectionEvent_}, didSelectHeaderEvent{didSelectHeaderEvent_}, dataSource{dataSource_}, sections{sections_} {}
    // Creating interface conversion operator: operator HMUI::TableView::IDataSource
    operator HMUI::TableView::IDataSource() noexcept {
      return *reinterpret_cast<HMUI::TableView::IDataSource*>(this);
    }
    // public System.Void add_didSelectRowInSectionEvent(System.Action`3<HMUI.SectionTableView,System.Int32,System.Int32> value)
    // Offset: 0x12B8A00
    void add_didSelectRowInSectionEvent(System::Action_3<HMUI::SectionTableView*, int, int>* value);
    // public System.Void remove_didSelectRowInSectionEvent(System.Action`3<HMUI.SectionTableView,System.Int32,System.Int32> value)
    // Offset: 0x12B8AA4
    void remove_didSelectRowInSectionEvent(System::Action_3<HMUI::SectionTableView*, int, int>* value);
    // public System.Void add_didSelectHeaderEvent(System.Action`2<HMUI.SectionTableView,System.Int32> value)
    // Offset: 0x12B8B48
    void add_didSelectHeaderEvent(System::Action_2<HMUI::SectionTableView*, int>* value);
    // public System.Void remove_didSelectHeaderEvent(System.Action`2<HMUI.SectionTableView,System.Int32> value)
    // Offset: 0x12B8BEC
    void remove_didSelectHeaderEvent(System::Action_2<HMUI::SectionTableView*, int>* value);
    // public HMUI.SectionTableView/IDataSource get_dataSource()
    // Offset: 0x12B8C90
    HMUI::SectionTableView::IDataSource* get_dataSource();
    // public System.Void set_dataSource(HMUI.SectionTableView/IDataSource value)
    // Offset: 0x12B8C98
    void set_dataSource(HMUI::SectionTableView::IDataSource* value);
    // public System.Boolean IsSectionUnfolded(System.Int32 section)
    // Offset: 0x12B8CBC
    bool IsSectionUnfolded(int section);
    // public System.Single CellSize()
    // Offset: 0x12B8CFC
    float CellSize();
    // public System.Int32 NumberOfCells()
    // Offset: 0x12B8DAC
    int NumberOfCells();
    // public HMUI.TableCell CellForIdx(HMUI.TableView tableView, System.Int32 baseRow)
    // Offset: 0x12B8DFC
    HMUI::TableCell* CellForIdx(HMUI::TableView* tableView, int baseRow);
    // public System.Void ReloadData(System.Boolean resetFoldState)
    // Offset: 0x12B90A4
    void ReloadData(bool resetFoldState);
    // public System.Void UnfoldAllSections()
    // Offset: 0x12B967C
    void UnfoldAllSections();
    // public System.Void FoldAll()
    // Offset: 0x12B96DC
    void FoldAll();
    // public System.Void UnfoldSection(System.Int32 section)
    // Offset: 0x12B9738
    void UnfoldSection(int section);
    // public System.Void FoldSection(System.Int32 section)
    // Offset: 0x12B9BC0
    void FoldSection(int section);
    // public System.Void ScrollToRow(System.Int32 section, System.Int32 row, HMUI.TableView/ScrollPositionType scrollPositionType, System.Boolean animated)
    // Offset: 0x12B9FA8
    void ScrollToRow(int section, int row, HMUI::TableView::ScrollPositionType scrollPositionType, bool animated);
    // public System.Void SectionAndRowForBaseRow(System.Int32 baseRow, out System.Int32 section, out System.Int32 row, out System.Boolean isSectionHeader)
    // Offset: 0x12B8FAC
    void SectionAndRowForBaseRow(int baseRow, int& section, int& row, bool& isSectionHeader);
    // public override System.Void ReloadData()
    // Offset: 0x12B909C
    // Implemented from: HMUI.TableView
    // Base method: System.Void TableView::ReloadData()
    void ReloadData();
    // protected override System.Void DidSelectCellWithIdx(System.Int32 baseRow)
    // Offset: 0x12B95B4
    // Implemented from: HMUI.TableView
    // Base method: System.Void TableView::DidSelectCellWithIdx(System.Int32 baseRow)
    void DidSelectCellWithIdx(int baseRow);
    // public System.Void .ctor()
    // Offset: 0x12BA0DC
    // Implemented from: HMUI.TableView
    // Base method: System.Void TableView::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SectionTableView* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::SectionTableView::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SectionTableView*, creationType>()));
    }
  }; // HMUI.SectionTableView
  #pragma pack(pop)
  static check_size<sizeof(SectionTableView), 192 + sizeof(::Array<HMUI::SectionTableView::Section>*)> __HMUI_SectionTableViewSizeCheck;
  static_assert(sizeof(SectionTableView) == 0xC8);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::SectionTableView*, "HMUI", "SectionTableView");
DEFINE_IL2CPP_ARG_TYPE(HMUI::SectionTableView::Section, "HMUI", "SectionTableView/Section");
// Writing includes for template specializations
#include "System/Action_3.hpp"
#include "System/Action_2.hpp"
#include "HMUI/SectionTableView_IDataSource.hpp"
#include "HMUI/TableView_ScrollPositionType.hpp"
// Writing MetadataGetter for method: HMUI::SectionTableView::add_didSelectRowInSectionEvent
// Il2CppName: add_didSelectRowInSectionEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SectionTableView::*)(System::Action_3<HMUI::SectionTableView*, int, int>*)>(&HMUI::SectionTableView::add_didSelectRowInSectionEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::SectionTableView*), "add_didSelectRowInSectionEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action_3<HMUI::SectionTableView*, int, int>*>()});
  }
};
// Writing MetadataGetter for method: HMUI::SectionTableView::remove_didSelectRowInSectionEvent
// Il2CppName: remove_didSelectRowInSectionEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SectionTableView::*)(System::Action_3<HMUI::SectionTableView*, int, int>*)>(&HMUI::SectionTableView::remove_didSelectRowInSectionEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::SectionTableView*), "remove_didSelectRowInSectionEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action_3<HMUI::SectionTableView*, int, int>*>()});
  }
};
// Writing MetadataGetter for method: HMUI::SectionTableView::add_didSelectHeaderEvent
// Il2CppName: add_didSelectHeaderEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SectionTableView::*)(System::Action_2<HMUI::SectionTableView*, int>*)>(&HMUI::SectionTableView::add_didSelectHeaderEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::SectionTableView*), "add_didSelectHeaderEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action_2<HMUI::SectionTableView*, int>*>()});
  }
};
// Writing MetadataGetter for method: HMUI::SectionTableView::remove_didSelectHeaderEvent
// Il2CppName: remove_didSelectHeaderEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SectionTableView::*)(System::Action_2<HMUI::SectionTableView*, int>*)>(&HMUI::SectionTableView::remove_didSelectHeaderEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::SectionTableView*), "remove_didSelectHeaderEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action_2<HMUI::SectionTableView*, int>*>()});
  }
};
// Writing MetadataGetter for method: HMUI::SectionTableView::get_dataSource
// Il2CppName: get_dataSource
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HMUI::SectionTableView::IDataSource* (HMUI::SectionTableView::*)()>(&HMUI::SectionTableView::get_dataSource)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::SectionTableView*), "get_dataSource", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::SectionTableView::set_dataSource
// Il2CppName: set_dataSource
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SectionTableView::*)(HMUI::SectionTableView::IDataSource*)>(&HMUI::SectionTableView::set_dataSource)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::SectionTableView*), "set_dataSource", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<HMUI::SectionTableView::IDataSource*>()});
  }
};
// Writing MetadataGetter for method: HMUI::SectionTableView::IsSectionUnfolded
// Il2CppName: IsSectionUnfolded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HMUI::SectionTableView::*)(int)>(&HMUI::SectionTableView::IsSectionUnfolded)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::SectionTableView*), "IsSectionUnfolded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: HMUI::SectionTableView::CellSize
// Il2CppName: CellSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (HMUI::SectionTableView::*)()>(&HMUI::SectionTableView::CellSize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::SectionTableView*), "CellSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::SectionTableView::NumberOfCells
// Il2CppName: NumberOfCells
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (HMUI::SectionTableView::*)()>(&HMUI::SectionTableView::NumberOfCells)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::SectionTableView*), "NumberOfCells", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::SectionTableView::CellForIdx
// Il2CppName: CellForIdx
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HMUI::TableCell* (HMUI::SectionTableView::*)(HMUI::TableView*, int)>(&HMUI::SectionTableView::CellForIdx)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::SectionTableView*), "CellForIdx", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<HMUI::TableView*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: HMUI::SectionTableView::ReloadData
// Il2CppName: ReloadData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SectionTableView::*)(bool)>(&HMUI::SectionTableView::ReloadData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::SectionTableView*), "ReloadData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: HMUI::SectionTableView::UnfoldAllSections
// Il2CppName: UnfoldAllSections
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SectionTableView::*)()>(&HMUI::SectionTableView::UnfoldAllSections)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::SectionTableView*), "UnfoldAllSections", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::SectionTableView::FoldAll
// Il2CppName: FoldAll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SectionTableView::*)()>(&HMUI::SectionTableView::FoldAll)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::SectionTableView*), "FoldAll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::SectionTableView::UnfoldSection
// Il2CppName: UnfoldSection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SectionTableView::*)(int)>(&HMUI::SectionTableView::UnfoldSection)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::SectionTableView*), "UnfoldSection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: HMUI::SectionTableView::FoldSection
// Il2CppName: FoldSection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SectionTableView::*)(int)>(&HMUI::SectionTableView::FoldSection)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::SectionTableView*), "FoldSection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: HMUI::SectionTableView::ScrollToRow
// Il2CppName: ScrollToRow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SectionTableView::*)(int, int, HMUI::TableView::ScrollPositionType, bool)>(&HMUI::SectionTableView::ScrollToRow)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::SectionTableView*), "ScrollToRow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<HMUI::TableView::ScrollPositionType>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: HMUI::SectionTableView::SectionAndRowForBaseRow
// Il2CppName: SectionAndRowForBaseRow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SectionTableView::*)(int, int&, int&, bool&)>(&HMUI::SectionTableView::SectionAndRowForBaseRow)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::SectionTableView*), "SectionAndRowForBaseRow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int&>(), ::il2cpp_utils::ExtractIndependentType<int&>(), ::il2cpp_utils::ExtractIndependentType<bool&>()});
  }
};
// Writing MetadataGetter for method: HMUI::SectionTableView::ReloadData
// Il2CppName: ReloadData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SectionTableView::*)()>(&HMUI::SectionTableView::ReloadData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::SectionTableView*), "ReloadData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::SectionTableView::DidSelectCellWithIdx
// Il2CppName: DidSelectCellWithIdx
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SectionTableView::*)(int)>(&HMUI::SectionTableView::DidSelectCellWithIdx)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::SectionTableView*), "DidSelectCellWithIdx", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: HMUI::SectionTableView::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
